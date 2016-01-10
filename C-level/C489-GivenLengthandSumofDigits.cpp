#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>
#include <string>
#include <map>
#include <math.h>

using namespace std;

int main() {
	int i, j, s, m, tt;
    char mi[105]={}, ma[105]={};
	scanf("%d%d", &m, &s);
    tt = s;
	if((m>1 && s==0) || s>9*m)
		printf("-1 -1\n");
    else{
        //min number
        for(i=m-1; i>0 && tt>9; i--, tt-=9)
                mi[i] = '9';
        if(i == 0)
            mi[0] = tt + '0';
        else {
            mi[0] = '1';
            mi[i] = tt - 1 + '0';
            while(i > 1)
                mi[--i] = '0';
        }
        //max number
        for(i=0; i<m && s>=9; i++, s-=9)
                ma[i] = '9';
        if(i<m && s<9){
            ma[i] = s + '0';
            while(i < m-1)
                ma[++i] = '0';
        }
		printf("%s %s\n", mi, ma);
    }
	return 0;
}
