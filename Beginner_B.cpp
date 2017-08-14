#include <iostream>
#include <vector>

using namespace std;

vector<int> v;
vector<bool> check;

int main(){
	int n, tmp, loc, cnt = 0;
	scanf("%d", &n);
	check.resize(n, false);
	for(int i = 0; i<n; i++){
		scanf("%d", &tmp);
		v.push_back(tmp);
	}
	while(!v.empty()){
//		for (int i = 0; i < check.size(); i++) {
//			if (check[i])printf("true ");
//			else printf("false ");
//		} printf("\n");
		if(v[loc] == 3){
			cnt++;
			v.erase(v.begin() + loc);
			if(!v.size())
				break;
			loc %= v.size();
			if(v.size() == 1)
				continue;
			check.clear();
			check.resize(v.size() - 1, false);
			continue;
		}
		if(!check[loc]){
			check[loc] = true;
			loc = (v[loc] - 3 + loc + v.size()) % v.size();
		}
		else
			break;
	}
	printf("%d", cnt);
	return 0; 
}
