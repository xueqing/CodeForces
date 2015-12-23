#include <stdio.h>

using namespace std;

int main() {
    int a, b, time = 0;
    scanf("%d %d", &a, &b);
	time += a;
	while(a >= b) {
		time += a / b;
		a = (a / b) + (a % b);
	}
	printf("%d\n", time);
	return 0;
}
