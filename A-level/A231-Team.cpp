#include <iostream>

using namespace std;

int main() {
	int i, n, res, p[1005], v[1005], t[1005];
	cin >> n;
	for(i=0; i<n; i++)
		cin >> p[i] >> v[i] >> t[i];
	res = 0;
	for(i=0; i<n; i++)
		res += (p[i]&v[i] || p[i]&t[i] || v[i]&t[i]);
	cout << res << endl;
	return 0;
}
