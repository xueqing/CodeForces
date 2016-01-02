#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

int main() {
	int x1, x2, y1, y2, dx, dy;
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	dx = x2 - x1;
	dy = y2 - y1;
	if(dx!=0 && dy!=0 && dx!=dy && dx!=-dy)
		printf("-1\n");
	else if(dx!=0 && dy!=0)
		printf("%d %d %d %d\n", x2, y1, x1, y2);
	else if(dx!=0 && dy==0)
		printf("%d %d %d %d\n", x1, y1+dx, x2, y1+dx);
	else if(dx==0 && dy!=0)
		printf("%d %d %d %d\n", x1+dy, y1, x1+dy, y2);
	return 0;
}

