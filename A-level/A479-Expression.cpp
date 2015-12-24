#include <stdio.h>
#include <algorithm>	//max fucntion

using namespace std;

int main() {
	int a, b, c, res;
	scanf("%d%d%d", &a, &b, &c);
	res = a + b + c;
	res = max(res, (a+b)*c);
	res = max(res, a*(b+c));
	res = max(res, a*b*c);
	printf("%d\n", res);
	return 0;
}
