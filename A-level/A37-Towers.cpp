#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

int main() {
	int n, tmp, sum=0, Hi=1, h[1005]={0};
	scanf("%d", &n);
	for(int i=0; i<n; i++) {
		scanf("%d", &tmp);
		h[tmp]++;
	}
	for(int i=1; i<=1000; i++) {
		sum += (h[i] > 0);
		Hi = max(Hi, h[i]);
	}
	printf("%d %d\n", Hi, sum);
	return 0;
}

