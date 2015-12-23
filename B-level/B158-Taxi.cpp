#include <iostream>

using namespace std;

int main() {
	int i, n, arr[5]={0}, ind, res;
	cin >> n;
	for(i=0; i<n; i++) {
		cin >> ind;
		arr[ind]++;
	}
	
	res = arr[3] + arr[4];
	if(arr[1] <= arr[3])
		res += (arr[2] + 1) / 2;
	else
		res += arr[2]/2 + ((arr[2]%2)*2+arr[1]-arr[3]+3)/4;
	cout << res << endl;
	return 0;
}
