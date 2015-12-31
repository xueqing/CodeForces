#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int i, j, n, m, a[100]={0}, ind, s[100]={0};
	scanf("%d%d", &n, &m);
	for(i=0; i<m; i++) {
		scanf("%d", &a[0]);
		ind = 0;
		for(j=1; j<n; j++) {
			scanf("%d", &a[j]);
			if(a[j] > a[ind])
				ind = j;
		}
		s[ind]++;
	}
	ind = 0;
	for(j=1; j<n; j++) {
		if(s[j] > s[ind])
			ind = j;
	}
	printf("%d\n", ind+1);
	return 0;
}
