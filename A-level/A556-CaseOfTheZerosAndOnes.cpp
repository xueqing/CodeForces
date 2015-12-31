#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main() {
	int i, n, a[2]={0};
	char s[200005]={};
	scanf("%d%s", &n, s);
	for(i=0; i<n; i++)
		a[s[i]-'0']++;
	printf("%d\n", abs(a[0]-a[1]));
	return 0;
}
