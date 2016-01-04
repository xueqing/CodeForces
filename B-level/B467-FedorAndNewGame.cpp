#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

int main() {
	int i, j, n, m, k, x[1001]={0}, di, cnt=0;
	scanf("%d%d%d", &n, &m, &k);
	for(i=0; i<=m; i++)
		scanf("%d", &x[i]);
	for(i=0; i<m; i++) {
        di = 0;
		for(j=0; j<n; j++)
            di += ((x[i]>>j&1) != (x[m]>>j&1));
        cnt += (di <= k);
	}
    printf("%d\n", cnt);
	return 0;
}

