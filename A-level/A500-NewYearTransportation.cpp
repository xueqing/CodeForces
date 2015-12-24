// method-1
#include <stdio.h>

using namespace std;

int main() {
	int i, n, t, a[30005] = {0};
	scanf("%d%d", &n, &t);
	for(i=1; i<=n-1; i++)
		scanf("%d", &a[i]);
    int des = 1;
    while(des < t) {
        des += a[des];
    }
    if(des == t)
        printf("YES\n");
    else
        printf("NO\n");
	return 0;
}

// method-2
#include <stdio.h>

using namespace std;

int main() {
	int i, n, t, a[30005] = {0};
    bool can = false;
	scanf("%d%d", &n, &t);
	for(i=1; i<=n-1; i++)
		scanf("%d", &a[i]);
    int des = 1;
    while(true) {
        if(des == t)
            can = true;
        if(des >= t)
            break;
        des += a[des];
    }
    if(can)
        printf("YES\n");
    else
        printf("NO\n");
	return 0;
}

// method-3
#include <stdio.h>

using namespace std;

int n, t, a[30005] = {0};

bool Trans(int des) {
    if(des == t)
        return true;
    if(des > t)
        return false;
    return Trans(des+a[des]);
}

int main() {
	int i;
	scanf("%d%d", &n, &t);
	for(i=1; i<=n-1; i++)
		scanf("%d", &a[i]);
    if(Trans(1))
        printf("YES\n");
    else
        printf("NO\n");
	return 0;
}
