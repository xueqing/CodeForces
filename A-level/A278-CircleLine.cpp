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
	int i, n, d[101]={0}, s, t, r=0, sum=0;
    scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &d[i]);
		sum += d[i];
	}
	scanf("%d%d", &s, &t);
	if(s > t)	swap(s, t);
	for(i=s-1; i<t-1; i++)
		r += d[i];
	printf("%d\n", min(r, sum-r));
	return 0;
}
