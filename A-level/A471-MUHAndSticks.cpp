//=========================method 1
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main() {
	int i, tmp, a[10]={0}, sum=0;
	for(i=0; i<6; i++) {
		scanf("%d", &tmp);
		a[tmp]++;
	}
	sort(a, a+10);
	if(a[9]==6 || (a[9]==4 && a[8]==2))
		printf("Elephant\n");
	else if(a[9]==5 || (a[9]==4 && a[8]==1))
		printf("Bear\n");
	else
		printf("Alien\n");
	return 0;
}

//=========================method 2
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main() {
	int i, tmp, a[10]={0}, sum=0;
	bool legs=false, bear=false, elep=false;
	for(i=0; i<6; i++) {
		scanf("%d", &tmp);
		a[tmp]++;
	}
	for(i=1; i<=9; i++){
		switch (a[i]) {
			case 5:
				legs = true;
			case 1:
				bear = true; break;
			case 6:
				legs = true;
			case 2:
				elep = true; break;
			case 3:
				break;
			case 4:
				legs = true; break;
		}		
	}
	if(legs && bear)
		printf("Bear\n");
	else if(legs && elep)
		printf("Elephant\n");
	else
		printf("Alien\n");
	return 0;
}
