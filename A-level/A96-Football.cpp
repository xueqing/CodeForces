#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
	int len, i, cnt;
	char ch[105] = {};
	scanf("%s", ch);
	len = strlen(ch);
	cnt = 1;
	for(i=1; i<len; i++) {
		if(ch[i] == ch[i-1])
			cnt++;
		else
			cnt = 1;
		if(cnt == 7)
			break;
	}
	if(cnt == 7)
		printf("YES\n");
	else
		printf("NO\n");		
	return 0;
}
