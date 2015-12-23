#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int m, n, a;
	long long int res;
	while(cin >> m >> n >> a) {
		res = ceil((double)m / a) * ceil((double)n / a);
		cout << res << endl;
	}
	return 0;
}
