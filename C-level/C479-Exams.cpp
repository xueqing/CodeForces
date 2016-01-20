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

bool Comp (int* p1, int* p2){
	if(p1[0] == p2[0])	
		return p1[1] < p2[1];
	return p1[0] < p2[0];
}

int main() {
	int i, n, ll=-1, rr=0;
	int **x=new int*[5002];
    scanf("%d", &n);
	for(i=0; i<n; i++){
		x[i] = new int[2];
		scanf("%d%d", &x[i][0], &x[i][1]);
	}
	sort(x, x+n, Comp);
	x[0][1] = min(x[0][0], x[0][1]);
	for(i=1; i<n; i++)
		x[i][1] = (min(x[i][0], x[i][1]) >= x[i-1][1] ? min(x[i][0], x[i][1]) : max(x[i][0], x[i][1]));
	printf("%d\n", x[n-1][1]);
	return 0;
}

/*
input
3
5 2
3 1
4 2
output
2
input
3
6 1
5 2
4 3
output
6
*/
