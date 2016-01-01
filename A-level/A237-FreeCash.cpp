//===================method 1
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

int main() {
	int i, n, h, m, a[1450]={0}, res=INT_MIN, Max=INT_MIN;
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		scanf("%d%d", &h, &m);
		a[h*60+m]++;
		Max = max(Max, h*60+m);
	}
	for(i=0; i<=Max; i++) {
		res = max(res, a[i]);
	}
	printf("%d\n", res);
	return 0;
}

//===================method 2
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

int main() {
	int i, n, h, m, last, cnt = 1, Max=1;
	scanf("%d%d%d", &n, &h, &m);
	last = h * 60 + m;
	for(i=1; i<n; i++) {
		scanf("%d%d", &h, &m);
		if(last == h * 60 + m)
			cnt++;
		else {
			Max = max(Max, cnt);
			cnt = 1;
			last = h * 60 + m;
		}
	}
	Max = max(Max, cnt);
	printf("%d\n", Max);
	return 0;
}
