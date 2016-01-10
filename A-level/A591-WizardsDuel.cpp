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
	int l, p, q;
	scanf("%d%d%d", &l, &p, &q);
	printf("%f\n", 1.0*l*p/(p+q));
	return 0;
}
