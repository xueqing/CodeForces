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
	int i, len, e=-1;
	char s[100005]={};
	scanf("%s", s);
	len = strlen(s);
	if((s[len-1] - '0') % 2 == 1){
		for(i=0; i<len-1; i++)
			if((s[i]-'0') % 2 == 0){
				if(s[i] < s[len-1]){
					e = i;
					break;	
				}
				else
					e = i;
			}
		if(e!=-1){
			swap(s[e], s[len-1]);
			printf("%s\n", s);
		}
		else
			printf("-1\n");
	}
	else{
		for(i=0; i<len-1; i++)
			if(s[i] < s[len-1]){
				swap(s[i], s[len-1]);
				printf("%s\n", s);
				break;
			}		
	}
	return 0;
}
