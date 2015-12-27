#include <iostream>
#include <stdio.h>
#include <string.h>	//memset function

using namespace std;

int main() {
	int n, t;
	char s[100] = {};
	scanf("%d%d", &n, &t);
	if(n == 1)
		printf("%d\n", (t > 9 ? -1 : t));
	else {
		memset(s, '0', n-1);
		printf("%d%s\n", (t > 9 ? 1 : t), s);
	}
	return 0;
}
