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

int main() {
	int i, j, n, a[4]={0}, res=INT_MIN;
	scanf("%d%d%d%d", &n, &a[0], &a[1], &a[2]);
	sort(a, a+3);
	for(i=n/a[0]; i>=0; i--)
		for(j=(n-i*a[0])/a[1]; j>=0; j--)
			if((n-i*a[0]-j*a[1])%a[2] == 0)
				res = max(res, i+j+(n-i*a[0]-j*a[1])/a[2]);
	printf("%d\n", res);
	return 0;
}
