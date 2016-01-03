#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

int main() {
	long long a, b, cnt=0, t;
	cin >> a >> b;
	while(b != 0){
		cnt += a/b;
		a %= b;
		swap(a, b);
	}
	cout << cnt << endl;
	return 0;
}

