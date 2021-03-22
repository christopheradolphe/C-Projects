#include <stdio.h>
#include <stdlib.h>

int my_strncmp(char *str1, char *str2, int num){
  if (str1[0] == '\0' || str2[0] == '\0' || num == 0){
    return 0;
  }else{
    if (str1[0] == str2[0]){
    return my_strncmp(str1+1, str2+1, num-1);
  }else{
      return str1[0] - str2[0];
  }
  }
}