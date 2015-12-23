#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
    int len, i;
    char ber[105] = {}, bir[105] = {};
    scanf("%s", ber);
    scanf("%s", bir);
	len = strlen(ber);
    if(len != strlen(bir))
        printf("NO\n");
    else {
	    for(i=0; i<len; i++) {
            if(ber[i] != bir[len-1-i])
                break;
	    }
        if(i<len)
    	    printf("NO\n");
        else
    	    printf("YES\n");
    }
	return 0;
}
