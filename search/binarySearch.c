#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key){
  int mid;
  while(low <= high){
    mid=(low + high) / 2;
    if(arr[mid] == key)
      return mid;
    else if(arr[mid] > key)
        high = mid -1;
    else
      low = mid + 1;
  }
  return -1;
}

int main(){
  int arr[] = {12,34,65,23,65,23,45,56,87,23};
  int key, found;
  printf("Enter a number to be searched.");
  scanf("%d", &key);
  found = binarySearch(arr, 0, 8, key);
  if(found == -1)
    printf("%d doesn't exists in the list", key);
  else
    printf("%d  exists in the list no. %d", key, found+1);
  return 0;

}
