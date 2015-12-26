//=========================method 1
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
	int lh, lg, lp, ch[26]={0}, cg[26]={0}, cp[26]={0};;
	char sh[105]={}, sg[105]={}, sp[210]={};
	scanf("%s", sh);
	scanf("%s", sg);
	scanf("%s", sp);
	lh = strlen(sh);
	lg = strlen(sg);
	lp = strlen(sp);
	if(lh + lg != lp)
		printf("NO\n");
	else {
		int i;
		for(i=0; i<lh; i++)
			ch[sh[i]-'A']++;
		for(i=0; i<lg; i++)
			cg[sg[i]-'A']++;
		for(i=0; i<lp; i++)
			cp[sp[i]-'A']++;
		for(i=0; i<26; i++)
			if(ch[i] + cg[i] != cp[i]) break;
		if(i < 26)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}

//==================method 2
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>	//sort function

using namespace std;

int main() {
	int lh, lg, lp, ch[26]={0}, cg[26]={0}, cp[26]={0};;
	char sh[105]={}, sg[105]={}, sp[210]={};
	scanf("%s%s%s", sh, sg, sp);
	strcat(sh, sg);
	sort(sh, sh + strlen(sh));
	sort(sp, sp + strlen(sp));
	if(strcmp(sh, sp) == 0)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
