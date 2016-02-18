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
	int i, j, n,cnt=0;
	scanf("%d", &n);
	if(n % 2 == 0){
		n >>= 1;
		cnt += n / 2;
		if(n % 2 == 0)
			cnt--;
	}
	printf("%d\n", cnt);
	return 0;
}
