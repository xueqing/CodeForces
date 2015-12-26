#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	long long int n, k, half;
	cin >> n >> k;
	half = (n + 1) / 2;
	if(k <= half)
		cout << ((k<<1)-1) << endl;
	else
		cout << ((k-half)<<1) << endl;
	return 0;
}
