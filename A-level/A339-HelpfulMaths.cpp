#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
	int len, i, cnt[5]={0};
	char ch[105]={};
	scanf("%s", ch);
	len = strlen(ch);
	for(i=0; i<len; i+=2)
		cnt[ch[i]-'1']++;
	i=0;
	while(cnt[0]--) {
		ch[i] = '1';
		i += 2;	
	}
	while(cnt[1]--) {
		ch[i] = '2';
		i += 2;	
	}
	while(cnt[2]--) {
		ch[i] = '3';
		i += 2;	
	}
	printf("%s\n", ch);
	return 0;
}
