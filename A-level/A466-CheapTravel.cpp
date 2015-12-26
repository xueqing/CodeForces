#include <iostream>
#include <stdio.h>
#include <algorithm>	//min function

using namespace std;

int main() {
	int n, m, a, b, sum = 0;
	scanf("%d%d%d%d", &n, &m, &a, &b);
	if(a * m <= b)
		sum = a * n;
	else {
		int left = n % m;
		sum = b*(n/m) + min(left * a, b);
	}
	printf("%d\n", sum);
	return 0;
}
