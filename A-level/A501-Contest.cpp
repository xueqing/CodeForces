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
	int a, b, c, d, m, v;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	m = max(3*a/10, a-a*c/250);
	v = max(3*b/10, b-b*d/250);
	if(m > v)	printf("Misha\n");
	else if(m < v)	printf("Vasya\n");
	else		printf("Tie\n");
	return 0;
}
