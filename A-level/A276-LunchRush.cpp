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
	int n, k, f, t, mf=INT_MIN;
	scanf("%d%d", &n, &k);
	while(n--){
		scanf("%d%d", &f, &t);
		mf = max(mf, f-(t > k ? t-k : 0));
	}
	printf("%d\n", mf);
	return 0;
}
