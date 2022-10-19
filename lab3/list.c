#include <stdio.h>
#include <stdlib.h>
#include "list.h"

List *cons(int head, List *tail) { 
  /* malloc() will be explained in the next lecture! */
  List *cell = malloc(sizeof(List));
  cell->head = head;
  cell->tail = tail;
  return cell;
}

/* Functions for you to implement */

int sum(List *list) {
  int sum = 0;
  int val = list->head;
  List *next = list->tail;
  while (1) {
    sum += val;
    if (next->tail == NULL){
      return sum+(next->head);
    }
    val = next->head;
    next = next->tail;
  }
  
}

void iterate(int (*f)(int), List *list) {
  List *next = list;
  while (1) {
    if (next->tail == NULL){
      next->head = f(next->head);
      break;
    }
    next->head = f(next->head);
    next = next->tail;
  }
}

void print_list(List *list) { 
  printf("[");
  int val = list->head;
  List *next = list->tail;
  while (1) {
    printf("%d, ", val);
    if (next->tail == NULL){
      printf("%d]\n", next->head);
      break;
    }
    //printf(", ");
    val = next->head;
    next = next->tail;
  }
}

/**** CHALLENGE PROBLEMS ****/

List *merge(List *list1, List *list2) { 
  /* TODO */
  return NULL;  
}

void split(List *list, List **list1, List **list2) { 
  
}

/* You get the mergesort implementation for free. But it won't
   work unless you implement merge() and split() first! */

List *mergesort(List *list) { 
  if (list == NULL || list->tail == NULL) { 
    return list;
  } else { 
    List *list1;
    List *list2;
    split(list, &list1, &list2);
    list1 = mergesort(list1);
    list2 = mergesort(list2);
    return merge(list1, list2);
  }
}
