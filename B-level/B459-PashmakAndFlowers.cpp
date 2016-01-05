#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>

using namespace std;

int main() {
	int i, n, b[200001]={0}, ll=1, rr=1;
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d", &b[i]);
	sort(b, b+n);
	if(b[0] == b[n-1])
	 	cout << 0 <<  ' ' << (long long)n*(n-1)/2 << endl;
	else {	
		for(i=1; i<n; i++) {
			if(b[i] == b[0]) ll++;
			else		 break;
		}
		for(i=n-2; i>=0; i--) {
			if(b[i] == b[n-1]) rr++;
			else		   break;
		}
	 	cout << (b[n-1]-b[0]) <<  ' ' << (long long)ll*rr << endl;
	}
	return 0;
}

