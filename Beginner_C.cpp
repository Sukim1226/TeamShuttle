#include <iostream>
#include <stack>
#include <string>

using namespace std;

stack<int> s;

int main(){
	string str;
	int n, tmp, tmp2;
	scanf("%d", &n);
	while(n--){
		cin>>str;
		if(str == "push"){
			scanf("%d", &tmp);
			s.push(tmp);
		}
		if(str == "pop"){
			if(s.empty()){
				printf("-1\n");
				continue;
			}
			printf("%d\n", s.top());
			s.pop();
		}
		if(str == "size")
			printf("%d\n", s.size());
		if(str == "empty"){
			if(s.empty())
				printf("1\n");
			else
				printf("0\n");
		}
		if(str == "top"){
			if(s.empty()){
				printf("-1\n");
				continue;
			}
			printf("%d\n", s.top());
		}
		if(str == "add"){
			if(s.size() <= 1){
				printf("ERROR\n");
				continue;
			}
			tmp = 0;
			tmp += s.top();
			s.pop();
			tmp += s.top();
			s.pop();
			printf("%d\n", tmp);
			s.push(tmp);
		}
		if(str == "sub"){
			if(s.size() <= 1){
				printf("ERROR\n");
				continue;
			}
			tmp = s.top();
			s.pop();
			tmp2 = s.top();
			s.pop();
			printf("%d\n", tmp2 - tmp);
			s.push(tmp2 - tmp);
		}
		if(str == "mul"){
			if(s.size() <= 1){
				printf("ERROR\n");
				continue;
			}
			tmp = s.top();
			s.pop();
			tmp *= s.top();
			s.pop();
			printf("%d\n", tmp);
			s.push(tmp);
		}
		if(str == "div"){
			if(s.size() <= 1){
				printf("ERROR\n");
				continue;
			}
			tmp = s.top();
			if(tmp == 0){
				printf("ERROR\n");
				continue;
			}
			s.pop();
			tmp2 = s.top();
			s.pop();
			printf("%d\n", tmp2/tmp);
			s.push(tmp2/tmp);
		}
	}
	return 0;
}
