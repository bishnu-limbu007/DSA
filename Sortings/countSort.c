#include <stdio.h>

#define MAX 10
#define HIGHEST 9

int higest(int arr[], int n){
  int i, max=arr[0], count[HIGHEST+1]={0};
  for(i=1;i<n;i++){
    if(max<arr[i])
      max=arr[i];
  }
  return max;
}

void countSort(int arr[], int n){
  int temp[MAX];
  int count[HIGHEST+1];
  int max=higest(arr, n);
  int i;
  for(i=0;i<n;i++){
    count[arr[i]]++;
  }
  for(i=1;i<=max;i++)
    count[i]+=count[i-1];
  for(i=n-1;i>=0;i--)
    temp[--count[arr[i]]] = arr[i];
  for(i=0;i<n;i++)
    arr[i] = temp[i];
}

int main(){
  int arr[MAX] = {9,8,7,6,5,4,3,2,1,0};
  int i;
  printf("Before sortings.....\n");
  for (i=0;i<MAX;i++)
    printf("%d ", arr[i]);
  countSort(arr, MAX);
  printf("After sortings.....\n");
  for (i=0;i<MAX;i++)
    printf("%d ", arr[i]);
  printf("\n");
  return 0;
}
