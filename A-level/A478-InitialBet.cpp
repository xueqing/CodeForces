#include <stdio.h>

using namespace std;

int main() {
	int c, sum = 0;
	for(int i=0; i<5; i++) {
		scanf("%d", &c);	
		sum += c;
	}
	if((sum > 0) && (sum % 5 == 0))
		printf("%d\n", sum/5);
	else
		printf("-1\n");
	return 0;
}
