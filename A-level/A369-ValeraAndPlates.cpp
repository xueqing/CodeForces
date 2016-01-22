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
	int i, n, m, k, t, cnt=0, a[5]={0};
	scanf("%d%d%d", &n, &m, &k);
	while(n--){
		scanf("%d", &t);
		a[t]++;
	}
	if(k >= a[2])		cnt = (m >= a[1] ? 0 : a[1]-m);
	else if(m+k >= a[2])cnt = (m+k-a[2] >=a[1] ? 0 : a[1]+a[2]-m-k);
	else				cnt = a[2]+a[1]-m-k;
	printf("%d\n", cnt);
	return 0;
}
