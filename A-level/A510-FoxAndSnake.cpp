#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
	int n, m, i, j;
	char s[2][55] = {};
	scanf("%d%d", &n, &m);
	memset(s[0], '#', m);
	printf("%s\n", s[0]);
	n >>= 1;
	for(i=1; i<=n; i++) {
		memset(s[1], '.', m);
		if(i & 1)
			s[1][m-1] = '#';
		else
			s[1][0] = '#';
		printf("%s\n", s[1]);
		printf("%s\n", s[0]);
	}
	return 0;
}
