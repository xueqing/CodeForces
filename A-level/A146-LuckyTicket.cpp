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
	int i, n, c1=0, c2=0;
	char s[55]={};
	scanf("%d%s", &n, s);
	for(i=0; i<n; i++){
		if(i == n/2)
			c1 = c2;
		if((s[i]=='4') || (s[i]=='7'))
			c2 += s[i] - '0';
		else
			break;
	}
	if((i==n) && (c1*2==c2))
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
