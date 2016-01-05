#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

int main() {
	int i, j, k, n;
	scanf("%d", &n);
	for(i=0; i<=2*n; i++){
		j = (i > n ? 2*n-i : i);
		for(k=0; k<2*(n-j); k++)
			printf(" ");
		for(k=0; k<j; k++)
			printf("%d ", k);
		printf("%d", j);
		for(k=j-1; k>=0; k--)
			printf(" %d", k);
		printf("\n");
	}
	return 0;
}

