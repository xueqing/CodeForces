#include <iostream>
#include <stdio.h>
#include <algorithm>	//sort function

using namespace std;

int main() {
	int n, i, a[101]={0};
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	sort(a, a+n);	//objects in the range [a,a+n) are sorted
	for(i=0; i<n-1; i++)
		printf("%d ", a[i]);
	printf("%d\n", a[i]);
	return 0;
}
