#include <stdio.h>
int linearSearch(int arr[], int n, int key){
  int i;
  for (i=0;i<n;i++){
    if(arr[i]==key)
      return i;
  }
    return -1;
}

int main(){
  int arr[] = {12,34,65,23,65,23,45,56,87,23};
  int key, found;
  printf("Enter a number to be searched.");
  scanf("%d", &key);
  found = linearSearch(arr, 10, key);
  if(found == -1)
    printf("%d doesn't exists in the list", key);
  else
    printf("%d  exists in the list no. %d", key, found+1);
  return 0;

}
