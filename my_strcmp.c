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

int main(void){
  char s1[4]= "abd";
  char s2[4]= "abf";
  printf("Value from my_strcmp_rec is: %d\n", my_strcmp(s1, s2));
  printf("Value from my_strcmp_rec is: %d\n", my_strcmp_rec(s1, s2));

  return 0;
}