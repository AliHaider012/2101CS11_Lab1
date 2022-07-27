#include <stdio.h>
#include <math.h>

void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

int main(){
    int n;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("\nEnter the elements: ");
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nInput array: ");
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

	insertionSort(arr, n);

    printf("\nSorted array: ");
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

	return 0;
}

