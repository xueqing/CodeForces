#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>
#include <string>
#include <map>

using namespace std;

int comp(const void *p1, const void *p2){
	return *(int *)p1-*(int *)p2;
}

int main() {
	int d, w[10]={52, 52, 52, 52, 53, 53, 52};
	int m[5]={12, 11, 7};
	char t[10]={0};
	scanf("%d of %s", &d, t);
	if(t[0] == 'w')
		printf("%d\n", w[d-1]);
	else
		printf("%d\n", m[d > 29 ? d-29 : 0]);
	return 0;
}
