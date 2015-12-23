#include <stdio.h>
#include <utility> //swap function

using namespace std;

int main() {
    int n, time;
	char que[55] = {};
    scanf("%d %d", &n, &time);
	scanf("%s", que);
	while(time--){	
		for(int i=0; i<n-1; i++) {
		    if(que[i]=='B' && que[i+1]=='G') {
				swap(que[i], que[i+1]);
				//que[i] = 'G'; 
				//que[i+1] = 'B';
				i++;
			}
		}
	}
	printf("%s\n", que);
	return 0;
}
