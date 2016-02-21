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
	
	ll r, x, y, x1, y1;
	cin >> r >> x >> y >> x1 >> y1;
	cout << (int)ceil(sqrt((y1-y)*(y1-y)+(x1-x)*(x1-x))/(2*r)) << endl;
	return 0;
}
