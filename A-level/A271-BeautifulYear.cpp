#include <stdio.h>

using namespace std;

int main() {
    int year, y1, y2, y3, y4;
    scanf("%d", &year);
	for(++year; ; year++) {
		int num[10] = {0};
		y1 = year / 1000;
		num[y1]++;
		y2 = (year % 1000) / 100;
		num[y2]++;
		y3 = (year % 100) / 10;		
		num[y3]++;
		y4 = year % 10; 		
		num[y4]++;
		if(num[y1]==1 && num[y2]==1 && num[y3]==1 && num[y4]==1)
			break;
	}	
	printf("%d\n", year);
	return 0;
}
