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
	int i, n, a[3005]={0}, res=0;
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	sort(a, a+n);
//	for(i=0; i<n; i++)
	//	printf("%d ", a[i]);
	//printf("\n");
	for(i=1; i<n; i++)
		if(a[i] <= a[i-1]){
			res += 1 + a[i-1] - a[i];
			a[i] = 1 + a[i-1];
		}
	printf("%d\n", res);
	return 0;
}
