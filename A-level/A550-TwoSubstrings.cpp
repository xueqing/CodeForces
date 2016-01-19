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
	char s[100005]={};
	scanf("%s", s);
	char* p1 = strstr(s, "AB");
	char* p2 = strstr(s, "BA");
	if((p1&&strstr(p1+2, "BA")) || (p2&&strstr(p2+2, "AB")))		
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
