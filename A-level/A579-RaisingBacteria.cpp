#include <iostream>
#include <stdio.h>
//#include <algorithm>	//min
//#include <limits.h>	//INT_MAX

using namespace std;

int main() {
	int sum = 0, n;
	scanf("%d", &n);
	while(n > 0) {
		sum += (n & 1);
		n >>= 1;
	}
	printf("%d\n", sum);
	return 0;
}
