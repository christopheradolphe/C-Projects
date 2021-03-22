#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int findLargestSum(int * array, int n, int * a, int *b){
  int max_cur_sum = 0;
  for (int i = 0; i<n; i++){
    if (array[i]>0){
      int sum = array[i];
      for(int j = i+1; j<n; j++){
        if (max_cur_sum < sum){
          max_cur_sum = sum;
        }
        sum = sum + array[j];
      }
    }
  }
  return max_cur_sum;
}

int main(void){
  //problem 3
  int arr[3] = {3, 4, 2};
  int **address = initStructure(3, arr);
  for (int i = 0; i<3; i++){
    int j = 0;
    while(j<arr[i]){
      printf("%d",address[i][j]);
      j++;
    }
    printf("\n");
  }
  ///free memory
  int i;
  for (i = 0; i<3; i++){
    free(address[i]);
  }
  //free the address
  free(address);

  return 0;
}