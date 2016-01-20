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
	int i, n, k[30]={0}, cnt=0;
	char key, door;
    scanf("%d\n", &n);
	for(i=1; i<n; i++){
		scanf("%c%c", &key, &door);
		if(toupper(key) != door){
			k[key-'a']++;
			if(k[door-'A']<1)	cnt++;
			else				k[door-'A']--;
		}
	}
	printf("%d\n", cnt);
	return 0;
}

/*
input
3
aAbB
output
0
input
4
aBaCaB
output
3
input
5
xYyXzZaZ
output
2
*/
