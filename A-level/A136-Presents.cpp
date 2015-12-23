#include <stdio.h>

using namespace std;

int main() {
    int i, n, input, gift[105] = {0};
    scanf("%d", &n);
	for(i=1; i<=n; i++) {
	    scanf("%d", &input);
		gift[input] = i;
	}

	for(i=1; i<n; i++)
		printf("%d ", gift[i]);
	printf("%d\n", gift[n]);
	return 0;
}
