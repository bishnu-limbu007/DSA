// void insertionSort(int arr[], int n){
//   int i,j,k;
//   for (i=1 ; i<n; i++){   // startings from second item so i=1
//     k = arr[i];    //second item = k
//     for(j=i-1 ; j>=0 && arr[j]>k ; j--){     //if k is smaller than previour number(j-1)     move one position right so that there will be room for insertion
//       arr[j+1] = arr[j];
//     }
//     arr[j+1] = k; //put the key item in the vacant room
//   }
//

#include <stdio.h>
#include <math.h>


void mergeSort(int arr[],int n){
  int q;
  q = floor(p+r) / 2;
  mergeSort(n, p, q);    //p is the start of first parted array and q is the end of first arrary
  mergeSort(n, q+1, r);  //q+1 is the starting index of second arr and r is the end of the second arr
  merge(n, p, q, r);


}

int main(){



}
