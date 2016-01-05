//=========================method 1
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

int a[100005][2]={0}, q, ind;

void Bsearch(int ll, int rr) {
	if(q>=a[ll][0] && q<=a[ll][1])
		ind = ll;
	else if(q>=a[rr][0] && q<=a[rr][1])
		ind = rr;
	else {
		int mid = (ll+rr) / 2;	
		if(q <= a[mid][1])  Bsearch(ll+1, mid);
		else		  		Bsearch(mid, rr-1);
	}
}

int main() {
	int i, j, n, m;
	scanf("%d", &n);
	for(i=1; i<=n; i++) {
		scanf("%d", &a[i][1]);
		a[i][0] = a[i-1][1] + 1;
		a[i][1] = a[i-1][1] + a[i][1];
	}
	scanf("%d", &m);
	while(m--) {
		scanf("%d", &q);
		Bsearch(1, n);
		printf("%d\n", ind);
	}
	return 0;
}

//=========================method 2
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

int Bsearch(int *a, int n, int q) {
	int ll=1, rr=n, mi;
	while(ll < rr) {
		mi = (ll + rr ) / 2;
		if(a[mi] == q) 		return mi;
		else if(a[mi] < q)	ll = mi + 1;
		else				rr = mi;
	}
	return ll;
}

int main() {
	int i, m, n, q, a[100005]={0};
	scanf("%d", &n);
	for(i=1; i<=n; i++) {
		scanf("%d", &a[i]);
		a[i] += a[i-1];
	}
	scanf("%d", &m);
	while(m--) {
		scanf("%d", &q);
		printf("%d\n", Bsearch(a, n, q));
	}
	return 0;
}

