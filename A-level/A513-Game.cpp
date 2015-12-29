#include <iostream>
#include <stdio.h>
#include <stdlib.h>	//abs function
#include <algorithm>	//min, max function

using namespace std;

int main() {
	int n1, n2, k1, k2;	
	scanf("%d%d%d%d", &n1, &n2, &k1, &k2);
	printf("%s\n", (n1 > n2 ? "First" : "Second"));
	return 0;
}
