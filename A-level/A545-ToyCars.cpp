#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>
#include <string>
#include <map>

using namespace std;

int main() {
	int i, j, n, p, cnt=-1, good[105]={0};
	bool tag;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		tag = true;
		for(j=0; j<n; j++){
			scanf("%d", &p);
			if(p==1 || p==3)
				tag = false;
		}
        if(tag)
		    good[++cnt] = i+1;
	}
	printf("%d\n", cnt+1);
	for(i=0; i<=cnt; i++)
    	printf("%d ", good[i]);
	printf("\n");
	return 0;
}
