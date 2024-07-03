package tree_sitter_squirrel_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-squirrel"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_squirrel.Language())
	if language == nil {
		t.Errorf("Error loading Squirrel grammar")
	}
}
