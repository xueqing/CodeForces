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
	int i, n, a, cn[5]={0};
	char re[5][10]={"chest", "biceps", "back"};
    scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a);
        cn[i%3] += a;
	}
	i = 1;
	if(cn[0] > cn[1])   i=0;
	if(cn[i] < cn[2])   i=2;
	printf("%s\n", re[i]);
	return 0;
}
