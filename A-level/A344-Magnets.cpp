#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main() {
    int i, num, n, last, cnt = 1;
	scanf("%d", &n);
	scanf("%d", &last);
	while(--n) {
		scanf("%d", &num);
		if(last != num) {
			cnt++;
			last = num;
		}
	}
	printf("%d\n", cnt);
	return 0;
}
