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
	int i, j, n, m, a[101]={0}, b[101]={0}, cnt=0;
	cin >> n;
	for(i=0; i<n; i++)
		cin >> a[i];
	cin >> m;
	for(i=0; i<m; i++)
		cin >> b[i];
	sort(a, a+n);
	sort(b, b+m);
	for(i=0, j=0; i<n && j<m; i++, j++){
		if(abs(a[i]-b[j]) <= 1)		cnt++;
		else if(a[i] > b[j])		i--;
		else						j--;
	}
	printf("%d\n", cnt);
	return 0;
}
