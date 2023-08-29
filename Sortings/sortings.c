#include <stdio.h>

void insertionSort(int arr[], int n){
  int i,j,k;
  for (i=1 ; i<n; i++){
    k = arr[i];
    for(j=i-1 ; j>=0 && arr[j]>k ; j--){
      arr[j+1] = arr[j];
    }
    arr[j+1] = k;
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
  insertionSort(arr,10);
  
  for (i=0 ; i<10 ; i++){
    printf("%d ", arr[i]);
  }

  return 0;

}
