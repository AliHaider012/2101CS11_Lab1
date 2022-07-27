#include <stdio.h>

void swap(int *xp, int *yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n){
	int i, j, min_idx;

	for (i = 0; i < n-1; i++){
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;

		swap(&arr[min_idx], &arr[i]);
	}
}

int main(void){
    int n;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("\nEnter the elements: ");
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

	selectionSort(arr, n);

	printf("\nSorted array: ");

    printf("\nSorted array: ");
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

	return 0;
}

