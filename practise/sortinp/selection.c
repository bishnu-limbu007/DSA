#include<stdio.h>

void sort(int arr[], int n){                        //selection sort
  int smallest, temp, i, j;
  for(i=0 ; i<n-1 ; i++){
    smallest = i;
    for(j=i+1 ; j<10 ; j++){
      if(smallest>arr[j]){
        smallest = j;
      }      
    }
    temp = arr[i];
    arr[i] = arr[smallest];
    arr[smallest] = temp;
  }
}



int main(){
  int i, n;
  int arr[]={10,9,8,7,6,5,4,3,2,1};
  for(i=0 ; i<9 ; i++)
    printf("%d ", arr[i]);
  printf("\n");
  sort(arr, n);
  for(i=0 ; i<9 ; i++)
    printf("%d ", arr[i]);
  return 0;
}
