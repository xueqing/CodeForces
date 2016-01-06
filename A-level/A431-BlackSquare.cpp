#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

int main() {
	int i, len, a[5]={0}, sum=0;
	char s[100005]={};
	scanf("%d%d%d%d%s", &a[0], &a[1], &a[2], &a[3], s);
	len = strlen(s);
	for(i=0; i<len; i++)
		sum += a[s[i]-'1'];
	printf("%d\n", sum);
	return 0;
}

