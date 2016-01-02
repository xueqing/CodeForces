#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

int main() {
	int i, n, a[100005]={0}, b[100005]={0}, c[100005]={0};
	cin >> n;
	for(i=0; i<n; i++)
		cin >> a[i];		
	for(i=0; i<n-1; i++)
		cin >> b[i];		
	for(i=0; i<n-2; i++)
		cin >> c[i];
	sort(a, a+n);
	sort(b, b+n-1);
	sort(c, c+n-2);	
	for(i=0; i<n-1; i++)
		if(a[i] != b[i]) break;
	printf("%d\n", a[i]);	
	for(i=0; i<n-2; i++)
		if(b[i] != c[i]) break;	
	printf("%d\n", b[i]);
	return 0;
}

