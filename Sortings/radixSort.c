#include <stdio.h>
#define MAX 20

int getDigitCount(int n){
  int count=0;
  while(n>0){
    n=n/10;
    count++;
  }
  return count;
}

int getMaxDigit(int arr[], int n){
  int max=arr[0], i;
  for(i=1; i<n; i++)
   if( max < arr[i])
      max =arr[i];
  return getDigitCount(max);
}
void radixSort(int arr[], int n, int pos){
    int temp;
}




int main(){
  int arr[] = {9,8,7,6,5,4,3,2,1,0};
  int i;
  printf("Before sortings....\n");

  for (i=0 ; i<10 ; i++){
    printf("%d ", arr[i]);
  }
  printf("\nAfter sortings....\n");
  radixSort(arr,0,9); //from 0 to 9th index

  for (i=0 ; i<10 ; i++){
    printf("%d ", arr[i]);
  }

  return 0;

}
