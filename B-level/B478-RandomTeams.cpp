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
	long long m, n, mi=0, ma=0;
	cin >> n >> m;
	ma = (n-m+1) * (n-m) / 2;
	long long t = n/m, l = n%m;
	mi = ((m-l)*(t-1) + l*(t+1))*t/2;
	cout << mi << " " << ma << endl;
	return 0;
}
