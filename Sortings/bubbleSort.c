#include<stdio.h> 
#include<stdlib.h> 
#include<time.h> 

void bubbleSort(int arr[],int n){
  int temp;
  for(int i=0 ; i<10 ; i++){
    for(int j=0 ; j<10 ; j++){
      if(arr[j] > arr[j+1]){
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    } 
  }
}

int main(){
  srand(time(NULL)); //generates different random number after each run
  int arr[10];
  for(int i=0 ; i<10 ; i++){
    arr[i] = rand() % 10;
  }
  for(int i=0 ; i<10 ; i++){
    printf("%d ", arr[i]);
  }
  bubbleSort(arr, 10);
  for(int i=0 ; i<10 ; i++){
    printf("%d ", arr[i]);
  }

}
