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
	int i, n, h[100002]={0}, a[100002]={0}, hi=INT_MIN;
    scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d", &h[i]);
	for(i=n-1; i>=0; i--){
		hi = max(hi, h[i+1]);
		printf("i=%d, hi=%d\n", i, hi);
		a[i] = (hi < h[i] ? 0 : hi-h[i]+1);
	}
	for(i=0; i<n; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}
