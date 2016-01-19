#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>
#include <string>
#include <map>
#include <math.h>

using namespace std;

int comp(const void *p1, const void *p2){
	return *(int *)p2 - *(int *)p1;
}

int main() {
	int i, n, k, f[2001]={0}, sum=0;
    scanf("%d%d", &n, &k);
	for(i=0; i<n; i++)
		scanf("%d", &f[i]);
	//qsort(f, n, sizeof(int), comp);
	//for(i=0; i<n; i+=k)
	sort(f, f+n);
	for(i=n-1; i>=0; i-=k)
		sum += f[i] - 1;
	printf("%d\n", sum*2);
	return 0;
}
