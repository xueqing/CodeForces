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
	int len, num=1;
	char s[12]={};
	scanf("%s", s);
	len = strlen(s);
	for(int i=1; i<len; i++){
		if(s[len-1-i] == '4')		num += (1 << i);
		else				num += (1 << (i+1));
	}
	if(s[len-1] == '7')			num++;
	printf("%d\n", num);
	return 0;
}
