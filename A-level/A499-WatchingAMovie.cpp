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
	int n, x, l[52]={0}, r[52]={0}, m, sum=0;
	scanf("%d%d", &n, &x);
	for(int i=1; i<=n; i++){
		scanf("%d%d", &l[i], &r[i]);
		m = l[i] - r[i-1] - 1;
		sum += m % x + r[i] - l[i] + 1;
	}
	printf("%d\n", sum);
	return 0;
}
