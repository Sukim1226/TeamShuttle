//Stack calculator
//div 0 exception handling matter
#include <iostream>
#include <string>
#include <stack>
using namespace std;
stack<int> st;
int main(void) {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string cmd;
		cin >> cmd;
		if (!cmd.compare("push")) {
			int X;
			cin >> X;
			st.push(X);
		} else if (!cmd.compare("pop")) {
			if (st.empty()) {
				cout << "-1" << "\n";
			} else {
				cout << st.top() << "\n";
				st.pop();
			}
		} else if (!cmd.compare("size")) {
			cout << st.size() << "\n";
		} else if (!cmd.compare("empty")) {
			if (st.empty()) {
				cout << "1" << "\n";
			} else {
				cout << "0" << "\n";
			}
		} else if (!cmd.compare("top")) {
			if (st.empty()) {
				cout << "-1" << "\n";
			} else {
				cout << st.top() << "\n";
			}
		} else if (!cmd.compare("add")) {
			if (st.size() < 2) {
				cout << "ERROR" << "\n";
			} else {
				int first, second;
				first = st.top();
				st.pop();
				second = st.top();
				st.pop();
				st.push(first + second);
				cout << st.top() << "\n";
			}
		} else if (!cmd.compare("sub")) {
			if (st.size() < 2) {
				cout << "ERROR" << "\n";
			} else {
				int first, second;
				first = st.top();
				st.pop();
				second = st.top();
				st.pop();
				st.push(second - first);
				cout << st.top() << "\n";
			}
		} else if (!cmd.compare("mul")) {
			if (st.size() < 2) {
				cout << "ERROR" << "\n";
			} else {
				int first, second;
				first = st.top();
				st.pop();
				second = st.top();
				st.pop();
				st.push(first * second);
				cout << st.top() << "\n";
			}
		} else if (!cmd.compare("div")) {
			if (st.size() < 2) {
				cout << "ERROR" << "\n";
			} else {
				int first, second;
				first = st.top();
				st.pop();
				second = st.top();
				st.pop();
				if (first == 0) {
					cout << "ERROR" << "\n";
					st.push(second);
					st.push(first);
				} else {
					st.push(second / first);
					cout << st.top() << "\n";
				}
			}
		}
	}
	return 0;
}