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
	int i, n, c, pre, x, res=0;
    scanf("%d%d%d", &n, &c, &pre);
	while(--n){
		scanf("%d", &x);
		res = max(res, pre-c-x);
		pre = x;
	}
	printf("%d\n", res);
	return 0;
}
