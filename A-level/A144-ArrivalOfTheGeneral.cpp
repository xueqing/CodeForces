#include <iostream>

using namespace std;

int main() {
    int i, n, hei[105] = {0}, min_h = 101, max_h = 0, min_i, max_i;
    cin >> n;
	for(i=0; i<n; i++) {
		cin >> hei[i];
		if(hei[i] <= min_h) {
			min_h = hei[i];
			min_i = i;
		}
		if(hei[i] > max_h) {
			max_h = hei[i];
			max_i = i;
		}
	}
	int time = max_i + (n - 1 - min_i);
	if(max_i > min_i)
		time--;
	cout << time << endl;
	return 0;
}
