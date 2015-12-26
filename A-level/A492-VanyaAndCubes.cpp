#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int n, i = 0;
	cin >> n;
	while(n >= 0) {
		i++;
		n -= (i*(i+1)>>1);
	}
	cout << (i-1) << endl;
	return 0;
}
