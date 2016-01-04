#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

int main() {
	int i, n, a, Min=INT_MAX;
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		scanf("%d", &a);
		Min = min(Min, a);
	}
 	printf("%d\n", (Min == 1 ? -1 : 1));
	return 0;
}

