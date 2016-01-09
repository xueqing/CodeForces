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
	int m, n, sum=0;
	scanf("%d%d", &n, &m);
	while(true){
		if(m<1 || n<1 || m+n<3) break;
		if(m > n)	swap(m, n);
		m--; n-=2;
		sum++;
	}
	printf("%d\n", sum);
	return 0;
}
