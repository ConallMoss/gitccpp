#include <ctype.h>
#include <string.h>
#include "revwords.h"
#include <stdio.h>

void reverse_substring(char str[], int start, int end) { 
  /* TODO */
  char c;
  int i, j;
  for (i = start, j = end; i < j; i++, j--) {
    c = str[i];
    str[i] = str[j];
    str[j] = c;
  }


}

int is_word(char c) {
  return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int find_next_start(char str[], int len, int i) { 
  char prev = 0;
  if (i == 0){
    if (is_word(str[0])){
      return 0;
    }
    else{
      prev = str[0];
      i += 1;
    }
  }
  while (i < len) {
    if (is_word(str[i]) && !is_word(prev)){
      return i;
    } else {
      prev = str[i];
      i += 1;
    }
  }
  //check for start edge case
  //check for next nonalpha
  //then check for next alpha
  return -1;
}

int find_next_end(char str[], int len, int i) {
  /* TODO */
  while (i < len){
    if (is_word(str[i])){
      i += 1;
    } else {
      return i-1;
    }
    
  }
  return i-1;
  //check for next nonalpha
  //or reach end of string
}

void reverse_words(char s[]) { 
  /* TODO */
  int curr = 0;
  int len = strlen(s);
  while (curr != len) {
    int st = find_next_start(s, len, curr);
    if (st == -1){
      break;
    }
    int e = find_next_end(s, len, st);
    reverse_substring(s, st, e);
    curr = e+1;
    //printf("s: %d, e: %d, curr: %d \n", st, e, curr);
  }
}
