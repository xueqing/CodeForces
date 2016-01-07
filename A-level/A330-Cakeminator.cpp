#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

int main() {
	int i, j, r, c, cr[15]={0}, cc[15]={0};
	char s[15]={};
	scanf("%d%d", &r, &c);
	for(i=0; i<r; i++){
		scanf("%s", s);		
		for(j=0; j<c; j++)
			if(s[j] == 'S'){
				cr[i+1] = 1;
				cc[j+1] = 1;
			}
	}
	for(i=1; i<=r; i++)
		cr[0] += cr[i];
	for(i=1; i<=c; i++)
		cc[0] += cc[i];
	printf("%d\n", r*c-cr[0]*cc[0]);
	return 0;
}
