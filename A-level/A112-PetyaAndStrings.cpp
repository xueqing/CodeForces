#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main() {
	int len, i;
	char c1[105]={}, c2[105]={};
	scanf("%s", c1);
	scanf("%s", c2);
	len = strlen(c1);
	for(i=0; i<len; i++) {
		if((c1[i] == c2[i]) || (abs(c1[i]-c2[i]) == ('a' -'A')))
			continue;
		else {
			c1[i] = (c1[i] <= 'Z' ? c1[i] : c1[i]+'A'-'a');
			c2[i] = (c2[i] <= 'Z' ? c2[i] : c2[i]+'A'-'a');
			break;
		}
	}

	if(i == len)
		printf("0\n");
	else
		printf("%d\n", (c1[i] > c2[i] ? 1 : -1));
	return 0;
}
