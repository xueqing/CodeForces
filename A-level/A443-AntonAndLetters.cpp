#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
	int cnt=0, let[26]={0};
	char c;
	while(scanf("%c", &c) && c!='}') {
		if(c=='{' || c==' ' || c==',')	continue;
		let[c-'a'] = 1;
	}
	for(int i=0; i<26; i++)
		cnt += let[i];
	printf("%d\n", cnt);
	return 0;
}
