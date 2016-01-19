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
	int i, j, n, m, a, b, cnt=0;
	scanf("%d%d", &m, &n);
	while(n--){
		for(i=1; i<=m; i++){
			scanf("%d%d", &a, &b);
			cnt += (a|b);
		}
	}
	printf("%d\n", cnt);
	return 0;
}
