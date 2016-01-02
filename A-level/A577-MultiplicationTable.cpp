#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

int main() {
	int n, x, cnt=0;
	cin >> n >> x;
	for(int i=1; i<=n; i++)
		if(x%i==0 && x/i<=n)
			cnt++;
	printf("%d\n", cnt);
	return 0;
}

