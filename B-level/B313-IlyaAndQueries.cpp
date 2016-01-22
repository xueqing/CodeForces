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

int main() {
	int i, n, m, a[100005]={0}, ll, rr;
    char s[100005]={};
	scanf("%s\n%d", s, &m);
	n = strlen(s);
	for(i=1; i<=n; i++)
		a[i] = a[i-1] + (s[i-1] == s[i]);
	while(m--){
		scanf("%d%d", &ll, &rr);
		printf("%d\n", a[rr-1]-a[ll-1]);
	}
	return 0;
}
