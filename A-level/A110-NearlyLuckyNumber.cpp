#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
    int i, len, cnt = 0;
    char number[20] = {};
    scanf("%s", number);
	len = strlen(number);
    for(i=0; i<len; i++) {
        if(number[i]=='4' || number[i]=='7')
            cnt++;
	}
	if(cnt==4 || cnt==7)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
