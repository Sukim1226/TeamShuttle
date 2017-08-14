#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	int small = 0, mid = 0, big = 0, i;
	bool DONOTPRINT = false;
	bool s_closed = true, m_closed = true, b_closed = true;
	while (t--) {
		DONOTPRINT = false;
		small = 0, mid = 0, big = 0;
		s_closed = true, m_closed = true, b_closed = true;
		string str, subst;
		cin >> str;
		for (i = 0; i<str.length() - 1; i++) {
			subst = str.substr(i, 2);
			if (subst == "(}" || subst == "(]" || subst == "{)" || subst == "{]" || subst == "[)" || subst == "[}") {
				printf("NO\n");
				DONOTPRINT = true;
				goto end;
			}
		}
		for (i = 0; i<str.length(); i++) {
			if (str[i] == '(') {
				s_closed = false;
				small++;
			}
			if (str[i] == ')') {
				if (s_closed) {
					printf("NO\n");
					DONOTPRINT = true;
					break;
				}
				else if (small>1) {
					s_closed = false;
					small--;
				}
				else if (small == 1) {
					s_closed = true;
					small--;
				}
			}
			if (str[i] == '{') {
				m_closed = false;
				mid++;
			}
			if (str[i] == '}') {
				if (m_closed) {
					printf("NO\n");
					DONOTPRINT = true;
					break;
				}
				else if (mid>1) {
					m_closed = false;
					mid--;
				}
				else if (mid == 1) {
					m_closed = true;
					mid--;
				}
			}
			if (str[i] == '[') {
				b_closed = false;
				big++;
			}
			if (str[i] == ']') {
				if (b_closed) {
					printf("NO\n");
					DONOTPRINT = true;
					break;
				}
				else if (big > 1) {
					b_closed = false;
					big--;
				}
				else if (big == 1) {
					b_closed = true;
					big--;
				}
			}
			DONOTPRINT = false;
		}
		end:
		if (DONOTPRINT)
			continue;
		if (!small && !mid && !big)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
