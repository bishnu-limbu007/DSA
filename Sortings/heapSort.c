#include<stdio.h>




int main(){
  int arr[] = {9,8,7,6,5,4,3,2,1,0};
  int i;
  printf("Before sortings....\n");

  for (i=0 ; i<10 ; i++){
    printf("%d ", arr[i]);
  }
  printf("\nAfter sortings....\n");
  heapSort(arr,10);

  for (i=0 ; i<10 ; i++){
    printf("%d ", arr[i]);
  }

  return 0;

}
