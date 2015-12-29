#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
	long long cnt;
	int i, m, n, a[100001]={0};
	cin >> n >> m;
	for(i=0; i<m; i++)
		cin >> a[i];
	cnt = a[0] - 1;	
	for(i=1; i<m; i++)
		//cnt += (a[i] < a[i-1] ? (n-a[i-1]+a[i]) : (a[i]-a[i-1]));
		cnt += (a[i]-a[i-1]+n) % n;
	cout << cnt << endl;;
	return 0;
}
