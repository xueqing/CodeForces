#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

int main() {
	int n;
	char s[105]={};
	scanf("%d", &n);
	for(int i=1; i<=2*n-1; i+=2) {
		memset(s, '*', n);
	 	memset(s+abs(n-i)/2, 'D', (i > n ? 2*n-i : i));
		printf("%s\n", s);
	}
	return 0;
}

