#include <iostream>
#include <array>

using namespace std;

int stringmatch(int n, int m, string text, string pat);

int main() {
	string text;
	string pat;

	printf("Enter a text array.\n");
	getline(cin, text);
	int n = text.length();

	printf("Enter a pattern array.\n");
	getline(cin, pat);
	int m = pat.length();
	
	int result = stringmatch(n, m, text, pat);

	cout << result;

	return 0;
}

int stringmatch(int n, int m, string text, string pat) {
	int i, j;
	// start matching
	for (i = 0; i < n - m + 1; ++i) {
		j = 0;
		while (j < m && pat[j] == text[i+j]) {
			j = j+1;
			if (j == m) {
				return i;
			}
		}
 	}
 	return -1;
}