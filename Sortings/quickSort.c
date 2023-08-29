
#include <stdio.h>

void quickSort(int arr[], int left, int right){
  int pivot = left, down = left, up = right, temp;
  if(left < right){
  repeat :
    while(arr[down] <= arr[pivot] && down <= right)
      down++;
    while(arr[up] > arr[pivot])
      up--;
    if(down <= up){
      temp = arr[down];
      arr[down] = arr[up];
      arr[up] = temp;
      goto repeat;
    }
    else{
      temp = arr[pivot];
      arr[pivot] = arr[up];
      arr[up] = temp;
      quickSort(arr, left, up-1);
      quickSort(arr, up+1, right);
    }
  }
}



int main(){
  int arr[] = {9,8,7,6,5,4,3,2,1,0};
  int i;
  printf("Before sortings....\n");

  for (i=0 ; i<10 ; i++){
    printf("%d ", arr[i]);
  }
  printf("\nAfter sortings....\n");
  quickSort(arr,0,9); //from 0 to 9th index

  for (i=0 ; i<10 ; i++){
    printf("%d ", arr[i]);
  }

  return 0;

}
