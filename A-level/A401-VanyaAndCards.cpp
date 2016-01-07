#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

int main() {
	int n, x, tmp, sum=0;
	scanf("%d%d", &n, &x);
	while(n--) {
		scanf("%d", &tmp);
		sum += tmp;
	}
	printf("%d\n", (abs(sum)+x-1)/x);
	return 0;
}
