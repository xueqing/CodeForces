#include <stdio.h>

using namespace std;

int main() {
    int i, m, n, turn = 0;
    scanf("%d %d", &n, &m);
	while(m * n) {
		if(m > n)	n--;
		else		m--;
		turn ^= 1;
	}
	if(turn)
	    printf("Akshat\n");
	else
	    printf("Malvika\n");
	return 0;
}

#include <stdio.h>
#include <algorithm>	//min function

using namespace std;

int main() {
    int Min, m, n;
    scanf("%d %d", &n, &m);
	Min = min(m, n);
	if(Min % 2 == 0)
	    printf("Akshat\n");
	else
	    printf("Malvika\n");
	return 0;
}
