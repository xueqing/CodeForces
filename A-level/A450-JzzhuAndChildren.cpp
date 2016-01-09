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
	int i, j, m, n, a[101]={0}, cnt=0, res;
	scanf("%d%d", &n, &m);
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	while(cnt < n){
		for(i=0; i<n; i++){
			if(a[i] <= 0)	continue;
			else if(a[i] <= m){
				cnt++;
				a[i] -= m;
				res = i+1;
			}
			else			a[i] -= m;
		}
	}
	printf("%d\n", res);
	return 0;
}
