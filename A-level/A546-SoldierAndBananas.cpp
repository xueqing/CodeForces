//#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int k, w;
	long long n, cnt;
    //scanf("%d %lld %d", &k, &n, &w);
    cin >> k >> n >> w;	
    cnt = (k * w * (w+1) >> 1) - n;
    //printf("%lld\n", (cnt > 0 ? cnt : 0));
    if(cnt > 0)
        cout << cnt << endl;
    else
        cout << "0" << endl;
	return 0;
}
