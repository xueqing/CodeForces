#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
	int i, n, room[105][2] = {0}, cnt = 0;
	scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d %d", &room[i][0], &room[i][1]);
    for(i=0; i<n; i++)
        if(room[i][1] - room[i][0] >= 2)
    		cnt++;
	printf("%d\n", cnt);
	return 0;
}
