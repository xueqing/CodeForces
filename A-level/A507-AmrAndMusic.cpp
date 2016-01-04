#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

int comp(const void *p1, const void *p2) {
	int *a1 = (int *)p1;
	int *a2 = (int *)p2;
	return (a1[0] - a2[0]);
}

int main() {
	int i, n, k, cnt, a[101][2]={0}, ind[101]={0};
	scanf("%d%d", &n, &k);
	for(i=0; i<n; i++) {
		scanf("%d", &a[i][0]);
		a[i][1] = i+1;
	}
	qsort(a, n, sizeof(int)*2, comp);
	for(i=0, cnt=0; i<n; i++) {
		k -= a[i][0];
		if(k < 0) break;
		ind[cnt++] = a[i][1];
	}
 	printf("%d\n", cnt);
	for(i=0; i<cnt; i++)
 		printf("%d ", ind[i]);
 	//printf("\n");
	return 0;
}

