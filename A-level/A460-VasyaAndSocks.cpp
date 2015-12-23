#include <stdio.h>

using namespace std;

int main() {
    int n, m, day;
    scanf("%d %d", &n, &m);
	day = n;
	while(n >= m) {
		day += n / m;
		n = (n / m) + (n % m);
	}
	printf("%d\n", day);
	return 0;
}
