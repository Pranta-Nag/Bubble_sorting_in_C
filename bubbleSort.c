#include <stdio.h>

void bubbleSort (int arr[], int n){
    int temp;
    for (int i = 0; i< n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr [j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    printf(" \n");
}

int main(){
    int arr[] = {10,9,11,6,15,2};
    int n = 6;

printf("Original array ");
printArray(arr, n);

printf("Sorting Array ");
bubbleSort(arr,n);
printArray(arr, n);

return 0;


}