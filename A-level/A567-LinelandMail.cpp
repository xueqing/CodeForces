#include <iostream>
#include <stdio.h>
#include <algorithm>	//min, max function

using namespace std;

#define INF 4000000000

int main() {
	int i, n;
	long long x[100002]={0};
	scanf("%d", &n);
	for(i=1; i<=n; i++)
		cin >> x[i];
	x[0] = -INF;
	x[n+1] = INF;
	for(i=1; i<=n; i++)
		cout << min(x[i]-x[i-1], x[i+1]-x[i]) << " " << max(x[i]-x[1], x[n]-x[i]) << endl;;
	return 0;
}
