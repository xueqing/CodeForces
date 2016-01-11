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
	int i, n, h[100005]={0}, en=0, cnt=0;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d", &h[i]);
		en += h[i-1]-h[i];
		if(en < 0){
			cnt += -en;
			en = 0;
		}
	}
	printf("%d\n", cnt);
	return 0;
}
