#include <stdio.h>
#include <stdlib.h>		//qsort
//#include <algorithm>	//sort

using namespace std;

int comp(const void *p1, const void *p2) {
	return (*(int *)p1 - *(int *)p2);
}

int main() {
    int i, m, n, puzz[55] = {0}, min;
    scanf("%d %d", &n, &m);
	for(i=0; i<m; i++)
		scanf("%d", &puzz[i]);
	qsort(puzz, m, sizeof(int), comp);
	//sort(puzz, puzz+m);
	min = puzz[n-1] - puzz[0];
	for(i=n; i<m; i++)
		if(puzz[i] - puzz[i-n+1] < min)
			min = puzz[i] - puzz[i-n+1];
    printf("%d\n", min);
	return 0;
}
