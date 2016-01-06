#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

int main() {
	int n, a, b;
	scanf("%d%d%d", &n, &a, &b);
	printf("%d\n", n-max(a, n-b-1));//i>a && i>=n-b
	return 0;
}

