#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	string brain;
	cin >> s >> brain;
	int i = 0;
	bool reverse = true;	//true가 순방향, false가 역방향 
	while (i != brain.length()) {
		if (brain[i] == 'S') {
			if (reverse) {
				cout << s.front();
				s.erase(s.begin());
			}
			else {
				cout << s.back();
				//s.erase(s.end());
				s.pop_back();
			}
		}
		if (brain[i] == 'R') {
			if (reverse)
				reverse = false;
			else
				reverse = true;
		}
		if (brain[i] == 'A') {
			if (reverse) {
				s = "x" + s;
			}
			else {
				s = s + "x";
			}
		}
		i++;
	}
	return 0;
}
