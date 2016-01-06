#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

bool comp(char i, char j){return i>j;}

int main() {
	int n;
	char b[100]={}, a[20]={};
	char s[10][5]={"", "", "2", "3", "322", 
					"5", "53", "7", "7222", "7332"};
	scanf("%d%s", &n, a);
	for(int i=0; i<n; i++)
		strncat(b, s[a[i]-'0'], strlen(s[a[i]-'0']));
	sort(b, b+strlen(b), comp);
	printf("%s\n", b);
	return 0;
}
