#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>
#include <string>
#include <map>

using namespace std;

int comp(const void *p1, const void *p2){
	return *(int *)p1-*(int *)p2;
}

int main() {
	int n, p, q;
	bool tag = false;
	cin >> n;
	while(n--){
		cin >> p >> q;
		if(p != q) 	tag = true;
	}
	if(tag)		cout << "Happy Alex\n";
	else		cout << "Poor Alex\n";
	return 0;
}
