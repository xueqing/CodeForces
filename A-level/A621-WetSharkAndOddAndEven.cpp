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
	int n;
	ll tmp, sum=0, od=0, mi=INT_MAX;
	scanf("%d", &n);
	while(n--){
		cin >> tmp;
		sum += (ll)tmp;
		if(tmp % 2 != 0){
			od++;
			mi = min(mi, tmp);
		}
	}
	if(od % 2 != 0)
		sum -= mi;
	cout << sum << endl;
	return 0;
}
