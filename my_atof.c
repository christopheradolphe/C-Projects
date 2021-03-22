#include <stdio.h>
#include <stdlib.h>

double my_atof(char *str){
  int negative = 0;
  //Determine if negative (if negative, negative is 1)
  if(str[0]== '-'){
    negative = 1;
  }
  int res_before = 0;
  int size_before_decimal = 0;
  while (str[size_before_decimal+negative] != '.'){
      size_before_decimal++;
  }
  for(int i = negative; i<size_before_decimal+negative; i++){
      res_before = res_before*10;
      res_before = res_before + (str[i] - '0');
  }

  int res_after = 0;
  int total_size = 0;
  int size_after_decimal = size_before_decimal + 1 + negative;
  while (str[size_after_decimal] != '\0'){
    size_after_decimal++;
  }
  total_size = size_after_decimal;
  size_after_decimal = size_after_decimal - size_before_decimal - 1 - negative;
  for(int i = size_before_decimal +1 +negative; i<total_size; i++){
      res_after = res_after*10;
      res_after = res_after + (str[i] - '0');
  }

  double res;
  res = res_after;
  for (int i = 0; i<size_after_decimal; i++){
    res = res/10;
  }
  res = res + res_before;
  if (negative == 1){
    res = res * -1;
  }
  return res;

}

