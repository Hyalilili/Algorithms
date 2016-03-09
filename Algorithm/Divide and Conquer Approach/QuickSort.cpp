#include <iostream>

using namespace std;

void swap (int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}

// set last element as pivot and move forward
// int partition(int array[], int start, int end) {
// 	int p = array[end];
// 	// index of smaller element
// 	int i = start - 1;

// 	// if current element is <= pivot
// 	for (int j = start; j <= end - 1; ++j) {
// 		if (array[j] <= p) {
// 			// increment index of smaller element
// 			i++;
// 			swap(&array[i], &array[j]);
// 		}
// 	}

// 	swap(&array[i + 1], &array[end]);

// 	return i + 1;
// }

// set first element as pivot and move backward
int partition(int array[], int start, int end) {
	int p = array[start];
	// index of smaller element
	int i = end + 1;

	// if current element is <= pivot
	for (int j = end; j >= start + 1; --j) {
		if (array[j] >= p) {
			// increment index of smaller element
			i--;
			swap(&array[i], &array[j]);
		}
	}

	swap(&array[i - 1], &array[start]);

	return i - 1;
}

void quickSort(int array[], int start, int end) {
	int s;
	if (start < end) {
		s = partition(array, start, end);

		quickSort(array, start, s - 1);
		quickSort(array, s + 1, end);
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

	quickSort(array, 0, n - 1);

	for (i = 0; i < n; ++i) {
		cout << array[i];
	}

	return 0;
}
