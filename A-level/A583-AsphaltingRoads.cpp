#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int i, j, n, a[2505][2]={0};
	bool h[55]={0}, v[55]={0};
	scanf("%d", &n);
	for(i=0; i<n*n; i++)
		scanf("%d%d", &a[i][0], &a[i][1]);
	for(i=0, j=0; i<n*n; i++){
		if(!h[a[i][0]] && !v[a[i][1]]){
			h[a[i][0]] = true;
			v[a[i][1]] = true;
			printf("%d ", i+1);
		}
	}
	return 0;
}
