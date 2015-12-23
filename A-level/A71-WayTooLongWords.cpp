#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

int main() {
	int n, len;
	char s[110] = {};
	cin >> n;
	while(cin >> s) {
		len = strlen(s);
		if(len <= 10)
			cout << s << endl;
		else
			cout << s[0] << len-2 << s[len-1] << endl;			
	}
	return 0;
}
