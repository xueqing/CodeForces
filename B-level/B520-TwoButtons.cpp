#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>
#include <string>
#include <map>
#include <math.h>

using namespace std;

#define ll long long

bool tag[10002];
int st[10002];

int Com(int m, int n){
	if(m < n)			return n-m;
	if(n*2==m)			return 1;
	if(n==0 || tag[n])	return INT_MAX-2;
	if(st[n] != -1)		return st[n];
	tag[n] = true;
	st[n] = min(Com(m, n<<1)+1, Com(m, n-1)+1);
	tag[n] = false;
	return st[n];
}

int main() {
	int m, n;
	scanf("%d%d", &n, &m);
	memset(st, -1, sizeof(st));
	if(n >= m)	printf("%d\n", n-m);
	else		printf("%d\n", Com(m, n));
	return 0;
}
