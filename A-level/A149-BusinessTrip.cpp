#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

#define M 12

int main() {
	int i, k, a[M+1]={0}, sum=0;
	scanf("%d", &k);
	for(i=0; i<M; i++)
		scanf("%d", &a[i]);
	sort(a, a+M);
	for(i=M; i>=0; i--){
		sum += a[i];
		if(sum >= k) break;
	}
 	printf("%d\n", (i < 0 ? -1 : M-i));
	return 0;
}

