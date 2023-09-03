#include <stdio.h>

void shellSort(int arr[], int n){
  int gap, temp, i, j;                     //half size of total interger
  for(gap=n/2;gap>0;gap= gap/2){
    for(i=gap;i<n;i++){
      temp= arr[i];                        //temp 1st item store
      for(j=i-gap; j>=0 && arr[j]>temp; j=j-gap)
        arr[j+gap] = arr[j];
      arr[j+gap] = temp;
    } 
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
  return 0;
}
