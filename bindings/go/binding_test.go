package tree_sitter_navi_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-navi"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_navi.Language())
	if language == nil {
		t.Errorf("Error loading Navi grammar")
	}
}
