#include <stdio.h>

using namespace std;

int main() {
	int input, i;
	int lucky[]={4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};	
	scanf("%d", &input);
	for(i=0; i<14; i++){
		if(input % lucky[i] == 0)
			break;
	}
	if(i < 14)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
