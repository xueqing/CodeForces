#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int i, n, cnt = 0;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
		cnt += (n-i)*i+1;
	printf("%d\n", cnt);
	return 0;
}
