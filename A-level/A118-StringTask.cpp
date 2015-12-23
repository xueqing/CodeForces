#include <iostream>
#include <string.h>

using namespace std;

int main() {
	int i, len;
	char s[110] = {};
	while(cin >> s) {
		len = strlen(s);
		for(i=0; i<len; i++) {
			if(s[i]>='A' && s[i]<='Z')		
				s[i] += 'a' - 'A';
			if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y')
				continue;
			else
				cout << '.' << s[i];
		}
		cout << endl;
	}
	return 0;
}
