#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insertion_sort(int *arr, int size){
  for(int i = 0; i<size; i++){
    for(int j = 0; j<i; j++){
      if(arr[i]<arr[j]){
        int temp_old = arr[j];
        arr[j] = arr[i];
        for(int n = j+1; n<i; n++){
          int temp_new = arr[n];
          arr[n] = temp_old;
          temp_old = temp_new;
        }
        arr[i] = temp_old;
        printf("Last value: %d\n", arr[i]);
        break;
      }
    }
  }
}


int main(void){
  int *arr = malloc(sizeof(int) * 5);
  arr[0] = 19;
  arr[1] = 45;
  arr[2] = 35;
  arr[3] = 2;
  for(int i = 0; i < 4; i++){
       printf("%d\n", arr[i]);
  }
  insertion_sort(arr, 4);
  for(int i = 0; i < 4; i++){
       printf("%d\n", arr[i]);
  }
  return 0;
}