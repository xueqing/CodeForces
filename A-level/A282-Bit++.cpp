#include <iostream>

using namespace std;

int main() {
	int x, n, i;
	char c1, c2, c3;
	x = 0;
	cin >> n;
	for(i=0; i<n; i++) {
		cin >> c1 >> c2 >> c3;
		x += (c2 == '+' ? 1 : -1);
	}
	cout << x << endl;
	return 0;
}
