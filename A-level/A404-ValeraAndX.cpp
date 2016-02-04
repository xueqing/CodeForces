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
	int i, j, n;
	char s[300][305]={};
	bool x=true;
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%s", s[i]);
	if(s[0][0] == s[0][1])
		x = false;
	if(x){
		for(i=0; i<n; i++){
			if(s[i][i]!=s[0][0] || s[i][n-1-i]!=s[0][0]){
				x = false;
				i = n;;
			}
		}
	}
	if(x){
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				if(j==i || j==n-1-i)	continue;
				if(s[i][j] != s[0][1]){
					x = false;
					i = j = n;
				}
			}
		}
	}
	if(!x)		printf("NO\n");
	else		printf("YES\n");
	return 0;
}
