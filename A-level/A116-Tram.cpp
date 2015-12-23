#include <iostream>

using namespace std;

int main() {
	int max, i, n, cur, a, b;
	max = 0;
	cur = 0;
	cin >> n;
	for(i=0; i<n; i++) {
		cin >> a >> b;
		cur += b - a;
		if(max < cur)
			max = cur;
	}
	cout << max << endl;
	return 0;
}
