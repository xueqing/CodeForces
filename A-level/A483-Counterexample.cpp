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

ll gcd(ll m, ll n){
	return (m == 0 ? n : gcd(n%m, m));
}

int main() {
	ll i, j, k, l, r;
	bool tag = false;
	cin >> l >> r;
	for(i=l; i<=r-2; i++){
		for(j=i+1; j<=r-1; j++){
			if(gcd(i, j) == 1) {
				for(k=j+1; k<=r; k++){
					if(gcd(j, k)==1 && gcd(i, k)>1){
						cout << i << " " << j << " " << k << endl;
						i=j=k=r+2;
						tag = true;
						break;
					}
				}
			}
		}
	}
	if(!tag)	printf("-1\n");
	return 0;
}
