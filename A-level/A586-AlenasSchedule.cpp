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
	int i, n, cnt=0, a[105]={};
    scanf("%d", &n);
	memset(a, 1, sizeof(int)*(n+2));
	for(i=1; i<=n; i++)
		scanf("%d", &a[i]);
	int b=1, e=n;
	while(b<=n && a[b] == 0) {b++;}
	if(b > n)	printf("0\n");
	else{
		while(e>=1 && a[e] == 0) {e--;}
		for(i=b; i<=e; i++){
			if(a[i]==0 && (a[i+1]==0 || a[i-1]==0))
				cnt++;
		}
		printf("%d\n", e-b+1-cnt);		
	}
	return 0;
}
