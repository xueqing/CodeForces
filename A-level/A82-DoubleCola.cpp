#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
    int n, i, j;
    char name[6][10] = {"Sheldon", "Leonard", 
			            "Penny", "Rajesh", "Howard"}; 
    scanf("%d", &n);
    for(i=1; ; i++)
        if((5 << i) >= 5 + n)
            break;
    n -= ((5 << (i-1)) - 5);
	for(j=1; j<6; j++)
        if((j << (i-1)) >= n)
            break;
    printf("%s\n", name[j-1]);
	return 0;
}
