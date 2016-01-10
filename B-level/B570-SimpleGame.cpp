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
	int i, n, m;
	scanf("%d%d", &n, &m);
	if(m*2 > n)	printf("%d\n", max(1, m-1));
	else 		printf("%d\n", m+1);
	return 0;
}
