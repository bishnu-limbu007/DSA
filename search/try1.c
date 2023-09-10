#include <stdio.h>
#include <stdbool.h>
int linearSearch(int arr[], int n, int key){
  for (int i=0;i<n;i++){
    if(arr[i]==key){
    printf("%d  exists in the list no. %d", key, i+1);
    return true;
     }
  }
  printf("%d not found", key);
    return false;
}

int main(){
  int arr[] = {12,34,65,23,65,23,45,56,87,23};
  int key;
  printf("Enter a number to be searched.");
  scanf("%d", &key);
   if(!linearSearch(arr, 10, key)) {
    printf("element not found");
  }
  return 0;

}
// #include <stdio.h>
// #include <stdbool.h>

// bool linearSearch(int arr[], int n, int key) {
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == key) {
//             printf("%d exists in the list at position %d\n", key, i + 1);
//             return true; // Element found, return true
//         }
//     }
//     printf("%d not found in the list\n", key);
//     return false; // Element not found, return false
// }

// int main() {
//     int arr[] = {12, 34, 65, 23, 65, 23, 45, 56, 87, 23};
//     int key;
//     printf("Enter a number to be searched: ");
//     scanf("%d", &key);

//     if (!linearSearch(arr, 10, key)) {
//         printf("Element not found.\n");
//     }

//     return 0;
// }
