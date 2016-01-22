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
	int n, m=-1;
	char s[100005]={}, t[100005]={}, p[100005]={};
	scanf("%s\n%s", s, t);
	n = strlen(s);
	for(int i=0; i<n; i++){
		if(s[i] != t[i])	
			m++;
	}
	if(m % 2 == 0)	
		printf("impossible\n");
	else{
		for(int i=0, j=0; i<n; i++){
			if(s[i] != t[i]){
				if(j <= m/2)	p[i] = s[i];
				else			p[i] = t[i];
				j++;
			}
			else
				p[i] = s[i];
		}
		printf("%s\n", p);
	}
	return 0;
}

/*
input
0001
1011
output
0011
input
000
111
output
impossible
*/
