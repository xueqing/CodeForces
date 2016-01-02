#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

int comp(const void *p1, const void *p2){
	int *a1 = (int *)p1;
	int *a2 = (int *)p2;
	return a2[0] - a1[0];
}

int main() {
	int i, n, a[20005][2]={0}, b[20005]={0}, cnt;
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		scanf("%d", &a[i][0]);
		a[i][1] = b[i] = i;
	}
	qsort(a, n, sizeof(int)*2, comp);
	b[a[0][1]] = 1;
	for(i=1, cnt=2; i<n; i++, cnt++) {
		if(a[i][0] == a[i-1][0])
			b[a[i][1]] = b[a[i-1][1]];
		else
			b[a[i][1]] = cnt;
	}
	for(i=0; i<n; i++)
		printf("%d ", b[i]);
	printf("\n");
	return 0;
}

