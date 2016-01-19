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
	int i, n, a[1005]={0}, sum=0, res=-1;
	scanf("%d", &n);
	for(i=1; i<=n; i++)		scanf("%d", &a[i]);
	while(n > sum){
		++res;
		for(i=1; i<=n; i++){
			if(a[i]>=0 && a[i]<=sum) {
				sum++;
				a[i] = -1;
			}
		}
		if(n == sum)	break;
		++res;
		for(i=n; i>=1; i--){
			if(a[i]>=0 && a[i]<=sum) {
				sum++;
				a[i] = -1;
			}
		}
	}
	printf("%d\n", res);
	return 0;
}
