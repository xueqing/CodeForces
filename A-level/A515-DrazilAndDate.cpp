#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	long long a, b, s;
	cin >> a >> b >> s;
	a = (a < 0 ? -a : a);
	b = (b < 0 ? -b : b);
	if((s >= a+b) && ((s-a-b) % 2 == 0))
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}
