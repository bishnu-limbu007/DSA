#include <stdio.h>

shellSort(int arr[], int n){
  int gap;                     //half size of total interger
  for(gap=n/2;gap>0;gap/=2){
    
  }
}



int main(){
  int arr[] = {5,8,16,52,12,3,7,8,9,10};
  printf("before sorting......\n");
  for (int i = 0; i<sizeof(arr)/sizeof(int);i++){
    printf("%d ", arr[i]);
  }
  shellSort(arr, sizeof(arr)/sizeof(int));
  printf("\nafter sorting......\n");
  for (int i = 0; i<sizeof(arr)/sizeof(int);i++){
    printf("%d ", arr[i]);
  }
}
