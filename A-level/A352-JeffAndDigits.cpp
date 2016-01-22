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
	int i, n, a, sum[5]={0};
	scanf("%d", &n);
	while(n--){
		scanf("%d", &a);
		sum[a/5]++;
	}
	if(sum[0] == 0)		printf("-1\n");
	else if(sum[1] < 9) printf("0\n");
	else{
		char s1[1005]={}, s2[1005]={};
		memset(s1, '5', sum[1]/9*9);
		memset(s2, '0', sum[0]);
		printf("%s%s\n", s1, s2);	
	}
	return 0;
}
