#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fib(int n){
  if (n == 0){
    return 0;
  }
  if (n == 1){
    return 1;
  }
  return (fib(n-1) + fib(n-2));
}



int main(void){
  //problem 1
  int a = fib(6);
  //printf("Fib for 6: %d", a);

  return 0;
}