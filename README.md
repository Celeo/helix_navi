# tree-sitter-navi

[![License: MIT](https://img.shields.io/badge/license-MIT-blue.svg)](#license)
[![tree-sitter](https://img.shields.io/badge/built%20with-tree--sitter-blueviolet.svg)](https://tree-sitter.github.io/)
[![Grammar](https://img.shields.io/badge/grammar-navi%20(.cheat)-green.svg)](https://github.com/denisidoro/navi)
[![Bindings](https://img.shields.io/badge/bindings-node%20%7C%20rust%20%7C%20python%20%7C%20go%20%7C%20swift%20%7C%20c-orange.svg)](#bindings)

A [tree-sitter](https://tree-sitter.github.io/) grammar for [navi](https://github.com/denisidoro/navi) `.cheat` cheatsheet files. It powers syntax highlighting and structural parsing of navi cheatsheets in editors like [Helix](https://helix-editor.com/), Neovim, and anything else that speaks tree-sitter.

![A navi .cheat file with syntax highlighting in Helix](screenshot.png)

## What it parses

navi cheatsheets are line-oriented — the first character of each line (its *marker*) decides the line type:

| Marker | Node          | Example                                  |
| :----: | ------------- | ---------------------------------------- |
| `%`    | `tags`        | `% git code`                             |
| `;`    | `comment`     | `; ignored by navi`                      |
| `#`    | `description` | `# Change branch`                        |
| `@`    | `authorship`  | `@ denisidoro`                           |
| `$`    | `variable`    | `$ branch: git branch --- --multi`       |
| *other*| `command`     | `git checkout <branch>`                  |

Command lines may embed `<placeholder>` references, and variables support a `command --- options` split. See [`example.cheat`](example.cheat) for a complete sample.

## Installation

```sh
git clone git@github.com:celeo/helix_navi.git
cd helix_navi
npm install
```

This builds the native parser via `node-gyp-build`. The CLI used below is available through `npx tree-sitter` (no global install required).

## Usage

```sh
# Parse a file and print its syntax tree
npx tree-sitter parse example.cheat

# Try the highlight queries against a file
npx tree-sitter highlight example.cheat
```

### Editor integration

Highlight queries live in [`queries/highlights.scm`](queries/highlights.scm). Point your editor's tree-sitter configuration at this grammar (file type: `.cheat`, scope: `source.navi`) to get highlighting.

#### Helix

1. Add the language and grammar to `~/.config/helix/languages.toml`:

   ```toml
   [[language]]
   name = "navi"
   scope = "source.navi"
   file-types = ["cheat"]
   comment-token = ";"
   indent = { tab-width = 2, unit = "  " }
   grammar = "navi"

   [[grammar]]
   name = "navi"
   # Use a local path during development — no git fetch, no credentials,
   # and it picks up your edits immediately.
   source = { path = "/absolute/path/to/tree-sitter-navi" }
   ```

   For a published/shared setup, swap the local path for a git source instead:
   `source = { git = "ssh://git@github.com/celeo/helix_navi", rev = "<commit-sha>" }`
   (SSH avoids credential prompts for private repos; HTTPS will ask for a username/password.)

2. Build the parser (skip `hx --grammar fetch` entirely when using a local `path`):

   ```sh
   hx --grammar build
   ```

   This builds *all* configured grammars, so you may see failures for unrelated languages you never fetched — those are harmless. Confirm navi specifically with `hx --grammar build 2>&1 | grep -i navi`.

3. Copy the highlight queries into Helix's runtime directory (Helix loads queries from there, not from this repo):

   ```sh
   mkdir -p ~/.config/helix/runtime/queries/navi
   cp queries/highlights.scm ~/.config/helix/runtime/queries/navi/
   ```

   A symlink works too and is handy during development so edits show up without re-copying.

4. Verify:

   ```sh
   hx --health navi
   ```

   You want `Tree-sitter parser: ✓` and `Highlight queries: ✓`. Textobject and indent queries show ✘ — that's expected, as this grammar doesn't ship those (navi has no nesting to indent or select). Then open a `.cheat` file to see highlighting.

## Development

The entire grammar is defined in [`grammar.js`](grammar.js); everything under `src/` is generated from it.

```sh
npx tree-sitter generate   # regenerate src/ after editing grammar.js
npx tree-sitter test       # run the corpus tests in test/corpus/
```

**The one rule:** re-run `tree-sitter generate` after every `grammar.js` change — the bindings compile from the generated `src/parser.c`, not from the JS. Then run the tests.

Corpus tests live in [`test/corpus/`](test/corpus/). Each block is a name, a source snippet, a `---` separator, and the expected S-expression tree.

To build the C libraries directly:

```sh
make          # libtree-sitter-navi.a / .dylib / .so
make install  # install headers + libs under $PREFIX (default /usr/local)
```

## Bindings

This repo ships bindings for **Node, Rust, Python, Go, Swift, and C** under [`bindings/`](bindings/). The committed `src/` lets consumers build without running `tree-sitter generate`.

## License

Released under the [MIT License](https://opensource.org/licenses/MIT).
