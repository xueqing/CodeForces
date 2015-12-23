#include <stdio.h>

using namespace std;

bool isNotPrime(int n) {
    int i;
    if(n % 2 == 0)
        return true;
    for(i=3; (i<<1)<=n; i+=2) {
        if(n % i == 0)
            return true;
    }
    return false;
}

int main() {
    int i, j, n;
    scanf("%d", &n);
	for(i=4; (i<<1)<=n; i++) {
        if(isNotPrime(i) && isNotPrime(n-i))
            break;
    }
	printf("%d %d\n", i, n-i);
	return 0;
}

#include <stdio.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
	if(n % 2 == 0)
		printf("%d %d\n", 4, n-4);
	else
		printf("%d %d\n", 9, n-9);
	return 0;
}
