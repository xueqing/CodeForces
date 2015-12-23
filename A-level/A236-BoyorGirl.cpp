#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
	char str[105] = {};
	int len, i, cnt = 0, have[30] = {0};	
	scanf("%s", str);
	len = strlen(str);
	for(i=0; i<len; i++)
		have[str[i]-'a']++;
	for(i=0; i<26; i++)
		if(have[i] > 0)
			cnt++;
	if((cnt & 1) == 0)
		printf("CHAT WITH HER!\n");
	else
		printf("IGNORE HIM!\n");
	return 0;
}
