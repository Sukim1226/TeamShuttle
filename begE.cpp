//Jihun's brainwave
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(void) {
	string starlett, brain;
	string ans = "";
	cin >> starlett >> brain;
	int flag = 0;
	for (int i = 0; i < brain.length(); i++) {
		if (brain[i] == 'A') {
			if (flag == 0) {
				starlett.insert(starlett.begin(), 'x');
			} else if (flag != 0) {
				starlett.insert(starlett.end(), 'x');
				flag++;
			}
		} else if (brain[i] == 'S') {
			if (flag == 0) {
				ans += starlett[flag];
				starlett.erase(starlett.begin());
			} else if (flag != 0) {
				ans += starlett[flag];
				starlett.erase(starlett.begin() + starlett.length() - 1);
				if (flag != 0) flag--;
			}
		} else if (brain[i] == 'R') {
			if (flag == 0) flag = starlett.length() - 1;
			else flag = 0;
		}
	}
	cout << ans << "\n";
	return 0;
}