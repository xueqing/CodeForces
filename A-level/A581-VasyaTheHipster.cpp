//=================method 1
#include <iostream>
#include <stdio.h>
#include <algorithm>	//min function
#include <stdlib.h>	//abs function

using namespace std;

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d %d\n", min(a, b), abs(a-b)/2);
	return 0;
}

//=================method 2
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int a, b, t1, t2;
	scanf("%d%d", &a, &b);
	t1 = (a < b ? a : b);
	t2 = (a < b ? (b-a)/2 : (a-b)/2);
	printf("%d %d\n", t1, t2);
	return 0;
}
