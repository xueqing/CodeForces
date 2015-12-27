#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int n, t1, t2, t3, sa, sb;
	scanf("%d%d%d", &t1, &t2, &t3);
	sa = t1 + t2 + t3 + 4;
	scanf("%d%d%d", &t1, &t2, &t3);
	sb = t1 + t2 + t3 + 9;
	scanf("%d", &n);
	printf("%s\n", ((sa/5 + sb/10) <= n ? "YES" : "NO"));
	return 0;
}
