#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

int main() {
    int i, n, a[300005]={0};
    long long res=0;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    sort(a, a+n);
    for(i=0; i<n-1; i++)
        res += (long long)a[i] * (i+2);
    res += (long long)a[n-1] * n;
    cout << res << endl;
    return 0;
}
