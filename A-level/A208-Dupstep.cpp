#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main() {
    int i, len;
	char s[205] = {};
	char *p;
	bool first = true;
	scanf("%s", s);
	len = strlen(s);
	for(i=0; i<len-2; i=p-s+3) {
		p = strstr(s+i, "WUB");
		if(!p)
			break;
		else if(p != s+i){
			char tmp[205] = {};			
			strncpy(tmp, s+i, p-(s+i));
			if(first) {
				printf("%s", tmp);
				first = false;		
			}
			else
				printf(" %s", tmp);
		}
	}
	if(i < len)
		printf(" %s\n", s+i);
	else
		printf("\n");
	return 0;
}
