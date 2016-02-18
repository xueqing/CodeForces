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
	int i, j, m, n, a[100005], l, s[100005]={0};
	bool b[100005]={0};
	scanf("%d%d", &n, &m);
	for(i=1; i<=n; i++)
		scanf("%d", &a[i]);
	for(i=n; i>=1; i--){
		if(!b[a[i]])	s[i] = s[i+1] + 1;
		else 			s[i] = s[i+1];
		b[a[i]] = true;
	}
	for(i=0; i<m; i++){
		scanf("%d", &l);
		printf("%d\n", s[l]);
	}
	return 0;
}
