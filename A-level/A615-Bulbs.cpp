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
	int i, m, n, num, ind;
	bool tag[105]={0};
    scanf("%d%d", &n, &m);
	while(n--){
		scanf("%d", &num);
		while(num--){
			scanf("%d", &ind);
			tag[ind] = true;
		}
	}
	for(i=1; i<=m; i++)
		if(!tag[i])	break;
	if(i <= m)		printf("NO\n");
	else			printf("YES\n");
	return 0;
}
