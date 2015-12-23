#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
	char str[1005] = {};
	scanf("%s", str);
	str[0] = (str[0] <= 'Z' ? str[0] : str[0]+'A'-'a');
	printf("%s\n", str);
	return 0;
}
