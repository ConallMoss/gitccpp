#include <stdlib.h>
#include "tree.h"

Tree *empty = NULL;

/* BASE EXERCISE */

int tree_member(int x, Tree *tree) { 
  if (tree == NULL){
    return 0;
  } else if((tree->value) == x){
    return 1;
  } else if ((tree->value) > x){
    return tree_member(x, tree->left);
  } else {
    return tree_member(x, tree->right);
  }
  return -1;
}

Tree *tree_insert(int x, Tree *tree) { 
  if (tree == NULL){
    Tree *mytree = malloc(sizeof(Tree));
    mytree->value = x;
    mytree->left = NULL;
    mytree->right = NULL;
    return mytree;
  } else if((tree->value) == x){
    return ;
  } else if ((tree->value) > x){
    
    return ;
  } else {
    return ;
  }
  return empty;
}

void tree_free(Tree *tree) { 
  /* TODO */
}

/* CHALLENGE EXERCISE */ 

void pop_minimum(Tree *tree, int *min, Tree **new_tree) { 
  /* TODO */
}

Tree *tree_remove(int x, Tree *tree) { 
  /* TODO */
  return empty;
}
