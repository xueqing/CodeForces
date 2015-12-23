#include <iostream>

using namespace std;

int main() {
	int w;
	while(cin >> w) {
		if(((w & 1) == 0) && (w >= 4))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
