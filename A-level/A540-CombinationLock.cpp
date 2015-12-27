#include <iostream>
#include <stdio.h>
#include <algorithm>	//min function
#include <stdlib.h>	//abs function

using namespace std;

int main() {
	int n, i, cnt=0, diff;
	char a[1001]={}, b[1001]={};
	scanf("%d%s%s", &n, a, b);
	for(i=0; i<n; i++)
		cnt += min(abs(a[i]-b[i]), 10-abs(a[i]-b[i]));
	printf("%d\n", cnt);
	return 0;
}
