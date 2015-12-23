#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int n, k, arr[55]={}, i, res;
	while(cin >> n >> k) {
		
		for(i=0; i<n; i++)
			cin >> arr[i];
		
		res = 0;
		for(i=0; i<n; i++) {
			if(arr[i] == 0)
				break;
			else if(arr[i] >= arr[k-1])
				res++;	
			else
				break;
		}
		cout << res << endl;
	}
	return 0;
}
