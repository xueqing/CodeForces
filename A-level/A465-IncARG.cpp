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
	int i=0, n;
	char c[105]={};
    scanf("%d%s", &n, c);
	while(i<n && c[i]=='1')
		i++;
	printf("%d\n", min(i+1, n));
	return 0;
}
