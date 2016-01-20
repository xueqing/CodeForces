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

#define ll long long

int main() {
	int i, j, n, s, x[102]={0}, y[102]={0}, res=-1;
    scanf("%d%d", &n, &s);
	for(i=0; i<n; i++)
		scanf("%d%d", &x[i], &y[i]);
	for(i=0; i<n; i++)
		if(s>=x[i] && y[i]==0)		res = max(res, 0);
		else if(s>x[i] && y[i]>0)	res = max(res, 100-y[i]);
	printf("%d\n", res);
	return 0;
}
