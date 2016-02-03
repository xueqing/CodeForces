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
	int x;
	scanf("%d", &x);
	printf("%d\n", x/5+(x%5!=0));
	return 0;
}
