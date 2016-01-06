#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

int main() {
	int i, n1, n2, m, k, a[100001]={0}, b[100001]={0};
	scanf("%d%d%d%d", &n1, &n2, &k, &m);
	for(i=0; i<n1; i++)
		scanf("%d", &a[i]);
	for(i=0; i<n2; i++)
		scanf("%d", &b[i]);
	sort(a, a+n1);
	sort(b, b+n2);
	printf("%s\n", (a[k-1] < b[n2-m] ? "YES" : "NO"));
	return 0;
}
