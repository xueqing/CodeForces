#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main() {
	int i, n, tmp, p=0, sum=0;
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		scanf("%d", &tmp);
		if(tmp == -1 && p > 0)
			p--;
		else if(tmp == -1 && p == 0)
			sum++;
		else
			p += tmp;		
	}
	printf("%d\n", sum);
	return 0;
}
