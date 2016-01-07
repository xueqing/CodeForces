#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

void Itoc(int x){
	//printf("x=%d\n", x);
	int n=-1;
	char s[50005]={};
	while(x > 0){
		//printf("s[%d]=%c; x=%d\n", n+1, (x + 25) % 26 + 'A', x);
		if(x % 26 == 0) {
			s[++n] = 'Z';
			x = x / 26 - 1;
		}
		else{
			s[++n] = x % 26 + 'A' - 1;
			x = x / 26;
		}
	}
	for(int i=n; i>=0; i--)
		printf("%c", s[i]);
}

int Ctoi(char *s){
	int len = strlen(s), x = 0;
	for(int i=0; i<len; i++)
		x = x * 26 + s[i] - 'A' + 1;
	return x;
}

int main() {
	int n;
	scanf("%d", &n);
	while(n--) {
		char in[100005]={}, tmp[50005]={};
		scanf("%s", in);
		if(in[0]=='R' && !isupper(in[1]) && strchr(in, 'C')){
			int i = 0;
			while(!isupper(in[++i]));
			strncpy(tmp, in+1, i-1);
			Itoc(atoi(in+i+1));
			printf("%s\n", tmp);
		}
		else{
			int i = -1;
			while(isupper(in[++i]));
			strncpy(tmp, in, i);
			//printf("tmp=%s\n", tmp);
			printf("R%sC%d\n", in+i, Ctoi(tmp));
		}
	}
	return 0;
}
