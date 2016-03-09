#include <iostream>
#include <array>

using namespace std;

int main() {
	int array[100];
	int n, i, j, min, temp;

	printf("Enter the size of the array.\n");
	scanf("%d", &n);

	printf("Enter %d elements.\n", n);

	for (i = 0; i < n; ++i) {
		scanf("%d", &array[i]);
	}

	// start sorting
	for (i = 0; i < n - 2; ++i) {
		min = i;

		for (j = i + 1; j < n - 1; ++j) {
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;
 	}

 	for (i = 0; i < n; ++i) {
 		cout << array[i] << " ";
 	}

	return 0;
}