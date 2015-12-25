#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
	int n, p, in, cnt=0, a[105]={0};
	cin >> n;
	for(int i=0; i<2; i++) {	
		cin >> p;
		while(p--) {
			cin >> in;
			a[in] = 1;
		}
	}
	for(int i=1; i<=n; i++)
		cnt += a[i];
	if(cnt == n)
		printf("I become the guy.\n");
	else
		printf("Oh, my keyboard!\n");
	return 0;
}
