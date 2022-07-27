#include <stdio.h>

int main(void){
    int n;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("\nEnter the elements: ");
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    //Bubble sort
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    //Printing the sorted array
    printf("\nSorted array: ");
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}