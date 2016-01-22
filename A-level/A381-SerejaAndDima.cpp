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
	int i, n, a[1005]={0}, sum[5]={0};
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	int ll=0, rr=n-1, tag=0;
	while(ll <= rr){
		if(a[ll] > a[rr]){
			sum[tag] += a[ll];
			ll++;
		}
		else{
			sum[tag] += a[rr];			
			rr--;
		}
		tag ^= 1;
	}
	printf("%d %d\n", sum[0], sum[1]);
	return 0;
}
