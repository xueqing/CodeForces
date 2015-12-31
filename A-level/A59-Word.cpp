#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>	//islower,toupper,tolower func

using namespace std;

int main() {
	int i, len, nl=0, nu=0;
	char u[101]={}, l[101]={};
	scanf("%s", l);
	len = strlen(l);
	memcpy(u, l, len+1);
	for(i=0; i<len; i++) {
		if(islower(l[i])) {
			nl++;
			u[i] = toupper(l[i]);	
		}
		else {
			nu++;
			l[i] = tolower(l[i]);	
		}
	}
	printf("%s\n", (nl < nu ? u : l));
	return 0;
}
