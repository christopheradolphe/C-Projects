#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct node{
    int data; 
    struct node *next; 
};

int my_strcmp_rec(char *str1, char *str2){
  int size = 0;
  while (str1[size] != '\0'){
      size++;
  }
  if (size == 0){
    return 0;
  }else{
    if (str1[0] == str2[0]){
      return my_strcmp_rec(str1+1, str2+1);
    }else{
      return str1[0] - str2[0];
    }

  }
}

int main(void){
  char s1[4]= "abd";
  char s2[4]= "abf";
  printf("Value from my_strcmp_rec is: %d\n", my_strcmp_rec(s1, s2));

  return 0;
}
