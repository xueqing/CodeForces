#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
	int len, tmp, last, i;
	char ch[105] = {};
	scanf("%s", ch);
	len = strlen(ch);
	last = -1;
	for(i=0; i<len; i++) {
		if(ch[i] >= 'a' && ch[i] <= 'z')
			last = i;
	}
	if(last > 0)
		printf("%s\n", ch);
	else {
		ch[0] = (last == -1 ? ch[0]+'a'-'A' : ch[0]+'A'-'a');
		for(i=1; i<len; i++)
			ch[i] += 'a' - 'A';
		printf("%s\n", ch);
	}
	return 0;
}
