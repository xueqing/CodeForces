#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main() {
    int i, j, mat[6][6] = {}, res;
    for(i=0; i<5; i++) {
    	for(j=0; j<5; j++) {
            scanf("%d", &mat[i][j]);
            if(mat[i][j] == 1)
                res = abs(i-2)+abs(j-2);
        }
    }
	printf("%d\n", res);
	return 0;
}
