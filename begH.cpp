//finding bracket pair_VPS
#include <stdio.h>
#include <stack>
#include <string.h>
#include <algorithm>
using namespace std;
void process();
int main(void) {
	int T;
	scanf("%d", &T);
	while (T--) process();
	return 0;
}
void process() {
	char line[105];
	stack<char> st;
	scanf("%s", line);
	st.push(line[0]);
	for (int i = 1; i < strlen(line); i++) {
		if (st.empty()) {
			st.push(line[i]);
		} else if (st.top() == '(' && line[i] == ')') {
			st.pop();
		} else if (st.top() == '{' && line[i] == '}') {
			st.pop();
		} else if (st.top() == '[' && line[i] == ']') {
			st.pop();
		} else {
			st.push(line[i]);
		}
	}
	if (st.empty()) printf("YES\n");
	else printf("NO\n", st.top());
}