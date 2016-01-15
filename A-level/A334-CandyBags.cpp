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
	int n, ave, sum;
	scanf("%d", &n);
	ave = (n*n+1) * n / 2;
	for(int i=1, j=1; i<=n; i++, j++) {
		for(int k=1; k<n/2; k++, j++)
			printf("%d %d ", j, n*n-j+1);
		if(n % 2 == 0)
			printf("%d %d\n", j, n*n-j+1);
		else
			printf("%d\n", j);
	}
	return 0;
}
