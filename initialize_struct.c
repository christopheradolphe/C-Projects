#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int **initStructure(int r, int *a){
  int i;
  int **p_arr = malloc(r*sizeof(int *));
  for(i=0; i<r; i++){
    p_arr[i] = malloc(a[i]*sizeof(int));
    int j = 0;
    while (j<a[i]){
      p_arr[i][j] = 0;
      j++;
    }
  }
    return p_arr;
}

int main(void){

  //problem 4
  int arr2[8] = {-2, -3, 4, -1, -2, 1, 5, -3};
  int max = findLargestSum(arr2, 8, arr2, arr2+8);
  printf("Wow we did it, max is: %d", max);
  return 0;
}