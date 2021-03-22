#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct node{
    int data; 
    struct node *next; 
};

int my_strcmp(char *str1, char *str2){
  int size = 0;
  while (str1[size] != '\0'){
      size++;
  }
  for(int i = 0; i<size; i++){
    if (str1[i] == str2[i]){
      continue;
    }else{
      return str1[i] - str2[i];
    }
  }
  return 0;

}
