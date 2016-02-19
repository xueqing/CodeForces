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

int main() {
	int i, n, cnt=1, a[100005]={0};
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	sort(a, a+n);
	for(i=1; i<n; i++){
		if(a[i-1] <= a[i]){
			cnt++;
			a[i] += a[i-1];
		}
		else
			a[i] = a[i-1];
	}
	printf("%d\n", cnt);
	return 0;
}
