#include <stdio.h>
#include <algorithm>	//max fucntion

using namespace std;

int main() {
	int i, n, a[100005] = {0}, cnt = 1, res = 0;
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
    for(i=1; i<n; i++) {
        if(a[i] >= a[i-1])
            cnt++;
        else {
            res = max(res, cnt);
            cnt = 1;
        }
    }
    res = max(res, cnt);
    printf("%d\n", res);
	return 0;
}
