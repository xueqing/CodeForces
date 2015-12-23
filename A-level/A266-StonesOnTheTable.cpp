#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
	int n, i, cnt;
	char ch[105]={};
	scanf("%d", &n);
	scanf("%s", ch);
	cnt = 0;
	for(i=1; i<n; i++) {
		if(ch[i] == ch[i-1])
			cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}

========================================

#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
	int n, i, cnt;
	char ch[105]={}, prev;
	scanf("%d", &n);
	scanf("%s", ch);
	cnt = 0;
	prev = ch[0];
	for(i=1; i<n; i++) {
		if(ch[i] == prev)
			cnt++;
		else
			prev = ch[i];
	}
	printf("%d\n", cnt);
	return 0;
}
