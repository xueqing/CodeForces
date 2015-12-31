#include <iostream>
#include <stdio.h>

using namespace std;

#define N 8

int main() {
	int i, j, wh=0, bl=0, point[26]={0};
	point['q' - 'a'] = 9;
	point['r' - 'a'] = 5;
	point['b' - 'a'] = 3;
	point['n' - 'a'] = 3;
	point['p' - 'a'] = 1;
	point['k' - 'a'] = 0;
	char ch[10]={};
	for(j=0; j<N; j++) {
		scanf("%s", ch);
		for(i=0; i<N; i++) {
			if(ch[i] >= 'a' && ch[i] <= 'z')
				bl += point[ch[i]-'a'];
			else if(ch[i] >= 'A' && ch[i] <= 'Z')
				wh += point[ch[i]-'A'];
		}
	}
	//printf("%d; %d\n", wh, bl);
	if(wh > bl)			printf("White\n");
	else if(wh < bl)	printf("Black\n");
	else				printf("Draw\n");
	return 0;
}
