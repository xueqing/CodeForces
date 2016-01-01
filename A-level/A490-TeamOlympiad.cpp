#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main() {
	int i, n, t, a[3][50005]={0}, team=0;
	scanf("%d", &n);
	for(i=1; i<=n; i++) {
		scanf("%d", &t);
		a[t-1][0]++;
		a[t-1][a[t-1][0]] = i;
	}
	team = min(a[0][0], min(a[1][0], a[2][0]));
	printf("%d\n", team);
	for(i=1; i<=team; i++)
		printf("%d %d %d\n", a[0][i], a[1][i], a[2][i]);
	return 0;
}
