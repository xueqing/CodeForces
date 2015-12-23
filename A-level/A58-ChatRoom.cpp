/*#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
	char str[105] = {}, target[10] = "hello";
	int len, i, cnt = 0;	
	scanf("%s", str);
	len = strlen(str);
	for(i=0; i<len && cnt<5; i++){
		if(str[i] == target[cnt])
			cnt++;
	}
	if(cnt == 5)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}

*/
#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;

int main() {
	char str[105] = {}, target[10] = "hello";
	int i = 0;
	scanf("%s", str);
	char *pt = str;
	for(i=0; i<5; i++){
		pt = strchr(pt, target[i]);
		if(pt)	pt++;
		else	break;
	}
	if(pt)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}



