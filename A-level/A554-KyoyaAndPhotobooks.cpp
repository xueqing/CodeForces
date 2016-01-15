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
	int i, len, a[1001]={0}, x, y;
	char s[22]={};
	scanf("%s", s);
	len = strlen(s);
	//printf("%d\n", 26*(len+1)-len);
	printf("%d\n", 25*len+26);
	return 0;
}
