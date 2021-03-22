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
  char s3[4] = "123";
  int conversion = my_atoi(s3);
  printf("Conversion: %d\n", conversion);

  return 0;
}