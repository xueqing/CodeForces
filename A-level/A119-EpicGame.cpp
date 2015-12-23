#include <stdio.h>
#include <string.h>

using namespace std;

int gcd(int a, int b) {
	return (b == 0 ? a : gcd(b, a%b));
}

int main() {
    int left, remove, turn = 0, number[5] = {0};
    scanf("%d%d%d", &number[0], &number[1], &left);
    while(true) {
		remove = (left > number[turn] ? gcd(left, number[turn]) : gcd(number[turn], left));
		if(remove > left)
			break;
		left -= remove;
		turn ^= 1;
	}
	printf("%d\n", turn^1);
	return 0;
}
