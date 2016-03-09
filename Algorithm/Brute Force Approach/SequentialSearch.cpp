#include <iostream>
#include <array>

using namespace std;

int seqsearch(int array[100], int key, int n);

int main() {
	int array[100];
	int n, i, j, key, temp;

	printf("Enter the size of the array.\n");
	scanf("%d", &n);

	printf("Enter %d elements.\n", n);

	for (i = 0; i < n; ++i) {
		scanf("%d", &array[i]);
	}

	cout << "Please enter a number to search: ";

	scanf("%d", &key);

	int res = seqsearch(array, key, n);

	cout << res << endl;

	return 0;
}

int seqsearch(int array[100], int key, int n) {
	// start searching
	int i = 0;
	for (i = 0; i < n - 1; ++i) {
		if (key == array[i])
			return i;
 	}
 	return -1;
}