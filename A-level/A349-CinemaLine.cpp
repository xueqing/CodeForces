#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

int main() {
	int n, tmp, h[5]={0};
	bool flag = 1;
	char res[2][5] = {"NO", "YES"};
	scanf("%d", &n);
	for(int i=0; i<n; i++) {
		scanf("%d", &tmp);
		h[tmp/25-1]++;
		if(h[0]<h[1] || h[0]-h[1]<h[3] || h[1]+h[0]<h[3]*3)
			flag = 0;
	}
	printf("%s\n", res[flag]);
	return 0;
}

