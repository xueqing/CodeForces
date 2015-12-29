#include <iostream>
#include <stdio.h>
#include <stdlib.h>	//qsort function

using namespace std;

int comp(const void *p1, const void *p2) {
	int *x1 = (int *)p1;
	int *x2 = (int *)p2;
	return x1[0] - x2[0];
}

int main() {
	int i, n, s, x[10001][2]={0};
	scanf("%d%d", &s, &n);
	for(i=0; i<n; i++)
		scanf("%d%d", &x[i][0], &x[i][1]);
	qsort(x, n, sizeof(int)*2, comp);
	//for(i=0; i<n; i++)
		//printf("%d %d;", x[i][0], x[i][1]);
	for(i=0; i<n; i++) {
		if(s > x[i][0])
			s += x[i][1];	
		else
			break;
	}
	printf("%s\n", (i < n ? "NO" : "YES"));
	return 0;
}
