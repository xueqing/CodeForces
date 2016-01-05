#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

int main() {
	int n, p, sum;
	scanf("%d", &n);
	for(int i=0; i<n; i++) {
		scanf("%d", &p);
		sum += p;
	}
	printf("%f\n", (double)sum/n);
	return 0;
}

