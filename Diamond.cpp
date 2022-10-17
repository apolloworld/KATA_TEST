#include <bits/stdc++.h>
using namespace std;

int main(int argn, char *args[]) {
	if (argn != 2) {
		puts("Invalid Arguments"); return -1;
	}
	char c = args[1][0];
	if (c < 'A' || c > 'Z') {
		puts("Invalid Arguments"); return -1;
	}
	int n = c - 'A' + 1;
	for (int i = -n + 1; i < n; i ++) {
		for (int j = -n + 1; j < n; j ++) {
			putchar(abs(i) + abs(j) != n - 1 ? ' ' : 'A' + abs(j));
		}
		putchar('\n');
	}
	putchar('\n');
	return 0;
}
