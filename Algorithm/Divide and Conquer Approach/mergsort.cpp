#include <iostream>

using namespace std;

void merge (int arr[], int start, int mid, int end) {
	int i, j, k;
	int n1 = mid - start + 1;
	int n2 = end - mid;

	int L[n1], R[n2];

	// copy data to temp arrays L and R
	for (i = 0; i < n1; ++i) {
		L[i] = arr[start + i];
	}
	for (j = 0; j < n2; ++j) {
		R[j] = arr[mid + 1 + j];
	}

	// merge the temp arrays back into arr[]
	i = 0;
	j = 0;
	k = start;

	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	// copy the remaining elements of L/R, if there are any left
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort (int arr[], int start, int end) {
	if (start < end) {
		int mid = start + (end - start) / 2;

		mergeSort(arr, start, mid);
		mergeSort(arr, mid + 1, end);

		merge(arr, start, mid, end);
	}
}

int main() {
	int array[100];
	int n, i, j, min, temp;

	printf("Enter the size of the array.\n");
	scanf("%d", &n);

	printf("Enter %d elements.\n", n);

	for (i = 0; i < n; ++i) {
		scanf("%d", &array[i]);
	}

	mergeSort(array, 0, n - 1);

	for (i = 0; i < n; ++i) {
		cout << array[i];
	}

	return 0;
}

// void printArray(int A[], int size)
// {
//     int i;
//     for (i=0; i < size; i++)
//         printf("%d ", A[i]);
//     printf("\n");
// }
 
// /* Driver program to test above functions */
// int main()
// {
//     int arr[] = {12, 11, 13, 5, 6, 7};
//     int arr_size = sizeof(arr)/sizeof(arr[0]);
 
//     printf("Given array is \n");
//     printArray(arr, arr_size);
 
//     mergeSort(arr, 0, arr_size - 1);
 
//     printf("\nSorted array is \n");
//     printArray(arr, arr_size);
//     return 0;
// }