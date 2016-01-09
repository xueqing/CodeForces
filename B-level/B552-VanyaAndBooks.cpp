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

long long Pow(int e){
	long long res = 1;
	while(e--)
		res *= 10;
	return res;
}

int main() {
	long long n, sum=0;
	int len;
	char s[15]={};
	scanf("%s", s);
	len = strlen(s);
	if(len == 1)		
		printf("%d\n", atoi(s));
	else{
		n = atoi(s+1);
		for(int i=1; i<len; i++)
			sum += i*9*Pow(i-1);
		sum += len*(s[0]-'1')*Pow(len-1) + len*(n+1);
		cout << sum << endl;
	}
	return 0;
}

/*====================================
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
    long long len, n, sum=0;
    char s[15]={};
    scanf("%s", s);
    len = strlen(s);
    if(len == 1)        
        printf("%d\n", atoi(s));
    else{
        n = (long long)atoi(s+1);
        for(long long i=1; i<len; i++){
            sum += i*9*pow(10, i-1);
            //cout << "i=" << i << ", sum=" << sum << endl;
        }
        sum += len*(s[0]-'1')*pow(10, len-1) + len*(n+1);
        cout << sum << endl;
    }
    return 0;
}*/
