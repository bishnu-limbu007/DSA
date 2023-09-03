#include <stdio.h>

void insertionSort(int arr[], int n){
  int i,j,k; 
  for (i=1 ; i<n; i++){   // startings from second item so i=1
    k = arr[i];    //second item = k
    for(j=i-1 ; j>=0 && arr[j]>k ; j--){     //if k is smaller than previour number(j-1)     move one position right so that there will be room for insertion
      arr[j+1] = arr[j];
    }
    arr[j+1] = k; //put the key item in the vacant room
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
