#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

int main() {
	int d1, d2, d3;
	scanf("%d%d%d", &d1, &d2, &d3);
	if(d1 > d2)	swap(d1, d2);
	printf("%d\n", d1+min(d1+d2, d3)+min(d2, d1+d3));
	return 0;
}
