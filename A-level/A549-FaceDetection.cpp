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

bool Com(char a, char b, char c){
	char t1[5] = {a, b, c};
	sort(t1, t1+3);
	return (t1[0]=='a' && t1[1]=='c' && t1[2]=='e');
}

int main() {
	int i, j, m, n, cnt=0;
	char im[52][52]={};
    scanf("%d%d", &n, &m);
	memset(im[0], 'x', m+2);
	memset(im[n+1], 'x', m+2);
	for(i=1; i<=n; i++){
		scanf("%s", im[i]+1);
		im[i][0] = im[i][m+1] = 'x';
	}
	for(i=1; i<=n; i++)
		for(j=1; j<=m; j++)
			if(im[i][j] == 'f'){
				cnt += Com(im[i-1][j-1], im[i-1][j], im[i][j-1]);
				cnt += Com(im[i-1][j+1], im[i-1][j], im[i][j+1]);
				cnt += Com(im[i+1][j-1], im[i+1][j], im[i][j-1]);
				cnt += Com(im[i+1][j+1], im[i+1][j], im[i][j+1]);
			}
	printf("%d\n", cnt);
	return 0;
}
