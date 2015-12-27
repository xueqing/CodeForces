//==================method 1
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int n, a[105]={0}, i, cnt[2]={0}, ind[105]={0};
    scanf("%d", &n);
	for(i=1; i<=n; i++) {
		scanf("%d", &a[i]);
		cnt[a[i]%2]++;
		ind[a[i]%2] = i;	
	}
	printf("%d\n", (cnt[0] > cnt[1] ? ind[1] : ind[0]));
    return 0;
}

//==============method 2
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int n, a[105]={0}, i, flag[2]={0};
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    for(i=1; i<=3; i++)
        flag[a[i]%2]++;
    int most = (flag[0] > flag[1] ? 0 : 1);
    for(i=1; i<=n; i++)
        if(a[i] % 2 != most)
            break;
    printf("%d\n", i);
    return 0;
}
