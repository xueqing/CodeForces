#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>
#include <string>
#include <map>

using namespace std;

int main() {
	int n;
	char a[10][10]={"zero", "one", "two", "three", "four","five", 				"six", "seven", "eight", "nine"};
	char b[10][10]={"ten", "eleven", "twelve", "thirteen", 				"fourteen", "fifteen", "sixteen", "seventeen", 				"eighteen", "nineteen"};
	char m[10][10]={"twenty", "thirty", "forty", "fifty", "sixty", 				"seventy", "eighty", "ninety"};
	scanf("%d", &n);
	if(n < 10)			printf("%s\n", a[n]);
	else if(n < 20)		printf("%s\n", (n == 0 ? "zero" : b[n-10]));
	else if(n%10 == 0)	printf("%s\n", m[n/10-2]);
	else				printf("%s-%s\n", m[n/10-2], a[n%10]);
	return 0;
}
