#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
	int i, len, ind;
	char dir, s[105]={}, tmp; 
	char key[]="qwertyuiopasdfghjkl;zxcvbnm,./";
	scanf("%c", &dir);
	scanf("%s", s);
	len = strlen(s);
	for(i=0; i<len; i++) {
		ind = strchr(key, s[i]) - key;
		s[i] = key[ind + (dir == 'R' ? -1 : 1)];
	}
	printf("%s\n", s);
	return 0;
}
