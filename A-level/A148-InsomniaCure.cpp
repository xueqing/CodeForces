#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
    int k, l, m, n, d, i, cnt = 0;
    bool injur[10005] = {0}; 
    scanf("%d", &k);
    scanf("%d", &l);
    scanf("%d", &m);
    scanf("%d", &n);
    scanf("%d", &d);
    for(i=1; i<=d; i++)
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
            cnt++;
    printf("%d\n", cnt);
	return 0;
}
