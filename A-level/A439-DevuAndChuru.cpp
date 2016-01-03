#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

int main() {
	int n, d, t;
	scanf("%d%d", &n, &d);
	for(int i=0; i<n; i++){
		scanf("%d", &t);
		d -= t;
	}
    if(d < 10 * (n-1))
        printf("-1\n");
    else
        printf("%d\n", d/5);
	return 0;
}

