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
	int i, a, b, res[5]={0};
	scanf("%d%d", &a, &b);
	for(i=1; i<=6; i++){
		if(abs(a-i) < abs(b-i))			res[0]++;
		else if(abs(a-i) == abs(b-i))	res[1]++;
		else							res[2]++;
	}
	printf("%d %d %d\n", res[0], res[1], res[2]);
	return 0;
}
