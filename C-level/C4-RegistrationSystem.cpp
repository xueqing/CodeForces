#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>
#include <string>
#include <map>

using namespace std;

int main() {
	int n, cnt;
	string s;
	map<string, int> mm;
	cin >> n;
	while(n--) {
		cin >> s;
		if(mm[s] == 0)
			cout << "OK\n";
		else
			cout << s << mm[s] << endl;
		mm[s]++;
	}
	return 0;
}

//================================method 2
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <limits.h>
#include <string>
#include <map>

using namespace std;

int main() {
	int n, cnt;
	string s;
	map<string, int> mm;
	cin >> n;
	while(n--) {
		cin >> s;
		pair<map<string, int>::iterator, bool> ret = mm.insert(pair<string, int>(s, 1));
		if(!ret.second){
			cnt = ret.first->second;
			mm.erase(ret.first);
			cout << s << cnt << endl;
			mm.insert(pair<string, int>(s, cnt+1));
		}
		else
			cout << "OK\n";
	}
	return 0;
}
