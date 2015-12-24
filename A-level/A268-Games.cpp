#include <stdio.h>

using namespace std;

int main() {
	int n, cnt = 0, th, ta;
	int sum_h[105] = {0}, sum_a[105] = {0};
	scanf("%d", &n);
	while(n--) {
		scanf("%d%d", &th, &ta);
		sum_h[th]++;
		sum_a[ta]++;
	}
	for(int i=1; i<=100; i++)
		cnt += sum_a[i] * sum_h[i];
    printf("%d\n", cnt);
	return 0;
}

