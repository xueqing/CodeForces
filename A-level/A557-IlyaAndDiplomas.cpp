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
	int i, n, ma[4]={0}, mi[4]={0};
	scanf("%d", &n);
	for(i=0; i<3; i++)
		scanf("%d%d", &mi[i], &ma[i]);
	if(ma[0]+mi[1]+mi[2] <= n){
		int a1 = min(n-ma[0]-mi[2], ma[1]);
		printf("%d %d %d\n", ma[0], a1, n-a1-ma[0]); 
	}
	else
		printf("%d %d %d\n", n-mi[1]-mi[2], mi[1], mi[2]);
	return 0;
}
