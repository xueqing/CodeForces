#include <stdio.h>
#include <stdlib.h>

using namespace std;

int comp(const void *a, const void *b) {
	return (*(int *)a - *(int *)b);
}

int main() {
	int n, i, coin[105] = {0}, sum = 0, less = 0;
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d", &coin[i]);
	qsort(coin, n, sizeof(int), comp);
	for(i=0; i<n; i++)
		sum += coin[i];
	for(i=n-1; i>=0; i--){
		less += coin[i];
		if((less<<1) > sum)
			break;
	}
	printf("%d\n", n-i);
	return 0;
}
