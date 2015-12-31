//====================method 1
#include <iostream>
#include <stdio.h>
#include <algorithm>	//min, max function
#include <stdlib.h>	//sort function
#include <string.h>	//memset function

using namespace std;

int m;
long long num[100001][2]={0}, p[100001][2];

long long Point(int ind, int tag) {
	if(ind > m)
		return 0;
	if(p[ind][tag] != -1)
		return p[ind][tag];
	if(ind > 0 && tag == 1 
		&& num[ind][0] - num[ind-1][0] == 1)
		p[ind][tag] = Point(ind+1, 0);
	else {
		long long s1 = Point(ind+1, 0);
		long long s2 = num[ind][1] * num[ind][0] + Point(ind+1, 1);
		//cout << ind << "; " << tag << "; " << s1 << "; " << s2 << endl;
		p[ind][tag] = max(s1, s2);
	}
	return p[ind][tag];
}

int main() {
	int i, n, a[100001]={0};
	scanf("%d", &n);
	memset(p, -1, sizeof(p));
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	sort(a, a+n);
	num[0][0] = a[0];
	num[0][1] = 1;
	for(i=1, m=0; i<n; i++){
		if(a[i] == num[m][0])		
			num[m][1]++;
		else{
			num[++m][0] = a[i];
			num[m][1] = 1;
		}
	}
	//for(i=0; i<=m; i++)
		//cout << num[i][0] << "; " << num[i][1] << endl;
	cout << Point(0, 0) << endl;
	return 0;
}

//====================method 2
#include <iostream>
#include <stdio.h>
#include <algorithm>	//min, max function

using namespace std;

int main() {
	int i, n, m=0, in;
	long long a[100001]={0}, res[2]={0}, tmp;
	cin >> n;
	for(i=0; i<n; i++) {
		cin >> in;
		a[in]++;
		m = max(m, in);
	}
	for(i=1; i<=m; i++){
		tmp = max(i*a[i]+res[0], res[1]);
		res[0] = res[1];
		res[1] = tmp;
	}
	cout << res[1] << endl;
	return 0;
}
