#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

int main() {
	int i, n, v, b, k, s, cnt=0, ind[55]={0};
	bool tag = false;
	scanf("%d%d", &n, &v);
	for(i=1; i<=n; i++){
		tag = false;
		scanf("%d", &k);
		while(k--){
			scanf("%d", &s);
			if(s < v)  tag = true;
		}
		if(tag) ind[cnt++] = i;
	}
	printf("%d\n", cnt);
	for(i=0; i<cnt; i++)
		printf("%d ", ind[i]);
	return 0;
}
