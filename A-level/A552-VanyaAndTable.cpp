#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>
#include <string>
#include <map>

using namespace std;

int main() {
	int i, j, n, x1, x2, y1, y2, cnt=0, m[105][105]={0};
	scanf("%d", &n);
	while(n--){
		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
		for(i=y1; i<=y2; i++)
			for(j=x1; j<=x2; j++)
				m[i][j]++;
	}
	for(i=1; i<=100; i++)
		for(j=1; j<=100; j++)
			cnt += m[i][j];
	printf("%d\n", cnt);
	return 0;
}

//========================method 2
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>
#include <string>
#include <map>

using namespace std;

int main() {
	int n, x1, x2, y1, y2, cnt=0;
	scanf("%d", &n);
	while(n--){
		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
		cnt += (y2-y1+1) * (x2-x1+1);	
	}
	printf("%d\n", cnt);
	return 0;
}

