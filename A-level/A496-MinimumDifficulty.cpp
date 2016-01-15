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
	int i, n, a[1001]={0}, x, y;
	scanf("%d%d%d%d", &n, &a[0], &a[1], &a[2]);
	x = max(a[1]-a[0], a[2]-a[1]);
	y = a[2] - a[0];
	for(i=3; i<n; i++) {
		scanf("%d", &a[i]);
		x = max(x, a[i]-a[i-1]);
		y = min(y, a[i]-a[i-2]);
	}
	printf("%d\n", max(x, y));
	return 0;
}
