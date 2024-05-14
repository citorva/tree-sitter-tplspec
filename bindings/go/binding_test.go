package tree_sitter_tplspec_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-tplspec"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_tplspec.Language())
	if language == nil {
		t.Errorf("Error loading Tplspec grammar")
	}
}
