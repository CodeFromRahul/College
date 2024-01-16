#include <stdio.h>

void insertionSort(int arr[], int n){
    int i, key, j;
    for (i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
      printf("Pass %d: \n", i);
     
      for (int l = 0; l < n; l++){
          printf("%d ", arr[l]);
      }
     
      printf("\n");
    }
}

int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    insertionSort(arr, n);

   
    return 0;
}