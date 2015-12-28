#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int n, p, Min, Max, cnt = 0;
	scanf("%d", &n);
	scanf("%d", &p);
	Min = Max = p;
	while(--n) {
		scanf("%d", &p);
		if(p < Min) {
			Min = p;
			cnt++;		
		}
		else if(p > Max) {
			Max = p;
			cnt++;		
		}
	}
	printf("%d\n", cnt);
	return 0;
}
