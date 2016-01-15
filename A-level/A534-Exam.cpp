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

#define ll long long

int main() {
	int i, n, half;
	scanf("%d", &n);
	if(n <= 2)		printf("1\n1\n");
	else if(n == 3)	printf("2\n1 3\n");
	else if(n == 4) printf("4\n3 1 4 2\n");
	else{
		printf("%d\n", n);
		half = (n+1) / 2;
		for(i=1; i<half; i++)
			printf("%d %d ", i, i+half);
		if(n % 2 == 0)	printf("%d %d\n", half, n);
		else			printf("%d\n", half);
	}
	return 0;
}
