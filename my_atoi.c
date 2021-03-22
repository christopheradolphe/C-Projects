#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct node{
    int data; 
    struct node *next; 
};


int my_atoi(char *str){
  int res = 0;
  int size = 0;
  while (str[size] != '\0'){
      size++;
  }
  for(int i = 0; i<size; i++){
    if(isdigit(str[i]) == 1){
      res = res*10;
      res = res + (str[i] - '0');
    }
  }
  return res;
}
