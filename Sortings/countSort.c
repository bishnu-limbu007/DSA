#include <stdio.h>

#define MAX 10

int higest(int arr[], int n){
  int i, max=arr[0];
  for(i=1;i<n;i++){
    if(max<arr[i])
      max=arr[i];
  }
return max;
}

void countSort(int arr[], int n){


}












int main(){
  int arr[MAX] = {8,4,3,6,5,9,2,3,7,8};
  int i;
  printf("Before sortings.....\n");
  for (i=0;i<MAX;i++)
    printf("%d ", arr[i]);
  printf("After sortings.....\n");
  for (i=0;i<MAX;i++)
    printf("%d ", arr[i]);
  return 0;
}
