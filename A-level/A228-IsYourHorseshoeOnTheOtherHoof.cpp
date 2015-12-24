#include <stdio.h>

using namespace std;

int main() {
	int a, b, c, d, cnt = 0;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if(b==a) cnt++;
	if(c==a || c==b) cnt++;
	if(d==a || d==b || d==c) cnt++;
    printf("%d\n", cnt);
	return 0;
}
