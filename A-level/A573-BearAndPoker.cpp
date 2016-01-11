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

ll gcd(ll a, ll b){
	return (b == 0 ? a : gcd(b, a%b));
}

ll lcm(ll a, ll b){
	if(a % b == 0)	return a;
	return (a * b / gcd(a, b));
}

bool Reach(ll x, ll y){
	while(x/y%2==0)
		x /= 2;
	while(x/y%3==0)
		x /= 3;
	return (x==y);
}

int main() {
	int i, n;
	ll a[100005]={0}, t;
	bool tag = true;
	cin >> n;
	for(i=0; i<n; i++)
		cin >> a[i];
	sort(a, a+n);
	for(i=1; i<n; i++){
		if(a[i] == a[i-1])
			continue;
		t = lcm(a[i], a[i-1]);
		//cout << i << ", " << t << endl;
		if(!Reach(t, a[i-1]) || !Reach(t, a[i])) {
			tag = false;
			break;	
		}
	}
	if(tag)		printf("Yes\n");
	else		printf("No\n");
	return 0;
}
