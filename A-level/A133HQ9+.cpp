#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
	int len, i;
	char ch[105]={};
	bool flag;
	scanf("%s", ch);
	len = strlen(ch);
	flag = false;
	for(i=0; i<len; i++) {
		if(ch[i] == 'H' || ch[i] == 'Q' || ch[i] == '9') {
			flag = true;		
		}
	}

	if(flag)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
