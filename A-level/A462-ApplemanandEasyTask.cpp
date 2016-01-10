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
	int n, i, j, cnt=0;
	char s[105][105]={};
	scanf("%d", &n);
	for(i=1; i<=n; i++)
		scanf("%s", (s[i]+1));
	for(i=0; i<=n+1; i++)
		s[0][i] = s[i][0] = s[n+1][i] = s[i][n+1] = 'x';
	for(i=1; i<=n; i++)
		for(j=1; j<=n; j++)
			if((s[i-1][j]+s[i+1][j]+s[i][j-1]+s[i][j+1]-4*'o')%2!=0)
				i = j = n + 2;
	if(i == n+1)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
