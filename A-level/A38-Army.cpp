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

#define ll long long

int main() {
	int i, n, a, b, d[105]={0};
	scanf("%d", &n);
	for(i=2; i<=n; i++){
		scanf("%d", &d[i]);	
		d[i] += d[i-1];
	}
	scanf("%d%d", &a, &b);
	printf("%d\n", d[b]-d[a]);
	return 0;
}
