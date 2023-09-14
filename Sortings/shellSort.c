#include <stdio.h>



int main(){
  int arr[] = {9,8,7,6,5,4,3,2,1,0};
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
