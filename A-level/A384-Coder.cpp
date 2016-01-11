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

int main() {
	int i, n;
	char s[2][1005]={};
	cin >> n;
	for(i=0; i<n-1; i+=2){
		s[0][i] = s[1][i+1] = 'C';
		s[0][i+1] = s[1][i] = '.';
	}
	if(i == n-1){
		s[0][i] = 'C';
		s[1][i] = '.';
	}
	cout << (n/2*n + n%2*((n+1)/2)) << endl;
	for(i=0; i<n; i++)
		cout << s[i%2] << endl;
	return 0;
}
