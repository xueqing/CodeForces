#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

int main() {
	char s[20]={};
	scanf("%s", s);
	int i, len;
	len = strlen(s);
	for(i=0; i<len; i++)
		s[i] = (s[i] > '4' ? ('9'-s[i]+'0') : s[i]);
	s[0] = (s[0] == '0' ? '9' : s[0]);
	printf("%s\n", s);
	return 0;
}

