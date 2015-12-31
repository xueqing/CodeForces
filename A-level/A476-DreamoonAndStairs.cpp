#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	if(n < m)
		printf("-1\n");
	else
		printf("%d\n", ((n+1)/2 + m - 1) / m * m);
	return 0;
}
