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
	int t;
	ll i, n, sum, cnt;
	scanf("%d", &t);
	while(t--){
		cin >> n;
		cnt = 1;
		sum = (n + 1) * n / 2;
		while(n >>= 1)
			cnt <<= 1;
		sum -= ((cnt<<2) - 2);
		cout << sum << endl;
	}
	return 0;
}
