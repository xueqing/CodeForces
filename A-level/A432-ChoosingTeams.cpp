#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

int main() {
	int i, n, k, tmp, cnt=0;
	scanf("%d%d", &n, &k);
	for(i=0; i<n; i++) {
		scanf("%d", &tmp);
		cnt += (tmp + k <= 5);
	}
	printf("%d\n", cnt/3);
	return 0;
}

