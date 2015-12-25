#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
	char m[105]={}, n[105]={};
	int len, i;
	scanf("%s", m);
	scanf("%s", n);
	len = strlen(m);
	for(i=0; i<len; i++)
		m[i] = (m[i] == n[i] ? '0' : '1');
	printf("%s\n", m);
	return 0;
}
