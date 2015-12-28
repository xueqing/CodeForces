#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int n, t[10][10]={0};
	scanf("%d", &n);
	int i, j;	
	for(i=0; i<n; i++)
		t[i][0] = 1;
	for(j=0; j<n; j++)
		t[0][j] = 1;
	for(i=1; i<n; i++)
		for(j=1; j<n; j++)
			t[i][j] = t[i-1][j] + t[i][j-1];
	printf("%d\n", t[n-1][n-1]);
	return 0;
}
