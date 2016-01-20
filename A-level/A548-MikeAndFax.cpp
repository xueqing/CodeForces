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
	char s[1002]={};
	int i, n, k;
    scanf("%s%d", s, &k);
	n = strlen(s);
	if(n % k != 0)	printf("NO\n");
	else{
		char *ll, *rr;
		int len = n/k; 
		for(i=0; i<k; i++){
			ll = s + i * len;
			rr = ll + len - 1;
			while(ll < rr){
				if(*ll != *rr)	break;
				ll++;
				rr--;
			}
			if(ll < rr){
				printf("NO\n");
				break;
			}
		}
	}
	if(i == k)		printf("YES\n");
	return 0;
}
