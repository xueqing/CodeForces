#include <iostream>
#include <stdio.h>
#include <algorithm>	//min
#include <limits.h>	//INT_MAX

using namespace std;

int main() {
	int n, a, p, Min=INT_MAX, sum=0;
	scanf("%d", &n);
	while(n--) {
		scanf("%d%d", &a, &p);
		Min = min(Min, p);
		sum += a * Min;
	}
	printf("%d\n", sum);
	return 0;
}
