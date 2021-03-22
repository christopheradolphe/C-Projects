#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct node{
    int data; 
    struct node *next; 
};

char *my_strcat(char *dest, char *src){
  int n = 0;
  while (dest[n] != '\0'){
      n++;
  }
  int size = 0;
  while (src[size] != '\0'){
      size++;
  }
  for (int i = n; i<(n+size); i++){
      dest[i] = src[i-n];
  }

  return dest;
}


int main(void){
  char str1[100] = "This is "; 
  char str2[] = "programiz.com";
  printf("str1: %s\n", str1);
  printf("str2: %s\n", str2);
  my_strcat(str1, str2);
  printf("str1: %s\n", str1);
  printf("str2: %s\n", str2);
  return 0;
}