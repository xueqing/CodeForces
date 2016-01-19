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
	int i, j, n, cnt=0;
	ll x;
    scanf("%d", &n);
	while(n--){
		cin >> x;
		cnt = 0;
		if(x < 4)			printf("NO\n");
		else if(x == 4)		printf("YES\n");
		else if(x%2==0)		printf("NO\n");
		else{
			bool t[1000002]={0};			
			for(i=3; (ll)i*i<=x; i+=2){
				if(t[i])	continue;
				if(x % i != 0){
					for(j=i; (ll)j*j<=x; j+=i)
						t[j] = true;
					continue;
				}
				cnt += (x/i == i ? 1 : 2);
				if(cnt > 1)	break;
			}
			if(cnt == 1)	printf("YES\n");
			else			printf("NO\n");
		}
	}
	return 0;
}
