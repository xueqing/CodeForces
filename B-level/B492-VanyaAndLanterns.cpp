#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

int main() {
	int i, n, l, a[1000]={0};
	scanf("%d%d", &n, &l);
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	sort(a, a+n);
	double dis = max(a[0], (l-a[n-1]));
	for(i=1; i<n; i++)
		dis = max(dis, (a[i]-a[i-1])/2.0);
	printf("%lf\n", dis);
	return 0;
}

