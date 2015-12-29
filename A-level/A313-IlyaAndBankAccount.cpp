#include <iostream>
#include <stdio.h>
#include <stdlib.h>	//abs function
#include <algorithm>	//min, max function

using namespace std;

int main() {
	int n, ll, rr;	
	scanf("%d", &n);
	if(n < 0){	
		rr = max((n % 100) / 10, n % 10);
		n = (n / 100) * 10 + rr;
	}
	printf("%d\n", n);
	return 0;
}
