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
	int i, j, n, s, e, a[100002]={0};
    scanf("%d", &n);
	for(i=1; i<=n; i++)
		scanf("%d", &a[i]);
	a[n+1] = INT_MAX;
	for(s=1; s<n; s++)
		if(a[s] > a[s+1])		break;
	if(s == n)	printf("yes\n1 1\n");
	else{
		for(e=n; e>1; e--)
			if(a[e] < a[e-1])	break;
		for(i=s+1; i<=e; i++)
			if(a[i] > a[i-1])	break;
		if(i>e && a[s-1]<a[e] && a[s]<a[e+1])
				printf("yes\n%d %d\n", s, e);
		else
			printf("no\n");
	}
	return 0;
}
