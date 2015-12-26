#include <iostream>
#include <stdio.h>
#include <algorithm>	//min function

using namespace std;

int main() {
	int n, i;
	bool a[26]={0};
	char s[101] = {};
	scanf("%d%s", &n, s);
	for(i=0; i<n; i++)
		a[s[i] - (s[i] > 'Z' ? 'a' : 'A')] = true;
	for(i=0; i<26; i++)
		if(!a[i]) break;
	if(i < 26)
		printf("NO\n");
	else
		printf("YES\n");
	return 0;
}
