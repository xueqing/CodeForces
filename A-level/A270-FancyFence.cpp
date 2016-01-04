#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

#define M 12

int main() {
	int t, a, n;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &a);
	 	printf("%s\n", (360 % (180-a) == 0 ? "YES" : "NO"));
	}
	return 0;
}

