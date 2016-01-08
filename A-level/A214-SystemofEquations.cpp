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
	int i, j, m, n, a, b, cnt=0;
	scanf("%d%d", &n, &m);
	a = min(m, (int)sqrt(n*1.0));
	b = min(n, (int)sqrt(m*1.0));
	for(i=0; i<=a; i++){
		j=n-i*i;
		cnt += (j<=b && i+j*j==m);
	}
	printf("%d\n", cnt);
	return 0;
}
