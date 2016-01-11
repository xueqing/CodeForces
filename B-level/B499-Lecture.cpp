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
	int i, j, n, m;
	string s1, s2;
	map<string, string> mm;
	cin >> n >> m;
	for(i=0; i<m; i++){
		cin >> s1 >> s2;
		mm[s1] = (s1.length() <= s2.length() ? s1 : s2);
	}
	for(i=0; i<n; i++){
		cin >> s1;
		cout << mm[s1] << " ";
	}
	printf("\n");
	return 0;
}
