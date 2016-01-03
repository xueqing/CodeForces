#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

int main() {
	int i, j, n, a, c[2]={0}, num[100]={0}, res;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d", &a);
		c[a]++;
		num[i] = c[0] - c[1];
	}
	res = num[1];
	for(i=0; i<n; i++)
		for(j=i+1; j<=n; j++)
			res = max(res, num[j]-num[i]);
	printf("%d\n", c[1]+res);
	return 0;
}

