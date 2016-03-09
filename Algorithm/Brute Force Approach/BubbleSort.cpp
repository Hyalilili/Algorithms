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
		for (j = 0; j < n - 2 - i; ++j) {
			if (array[j + 1] < array[j]) {
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
 	}

 	for (i = 0; i < n; ++i) {
 		cout << array[i] << " ";
 	}

	return 0;
}