#include <stdlib.h>
#include "tree.h"

Tree *empty = NULL;

/* BASE EXERCISE */
/*
struct node {
  struct node *left;
  int value;
  struct node *right;
};
*/

int tree_member(int x, Tree *tree) { 
  /* TODO */
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
  /* TODO */
  if (tree == NULL){
    return *tree(.value=x, .left=NULL, .right=NULL);
  } else if((tree->value) == x){

    return ;
  } else if ((tree->value) > x){
    return ;
  } else {
    return ;
  }

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
