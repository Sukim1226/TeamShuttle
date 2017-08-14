////Tofu game
//#include <stdio.h>
//#include <vector>
//using namespace std;
//vector <int> vec;
//bool ch[1005];
//int resize(int next, int size) {
//	if (next < 0) {
//		next = size + next;
//	} else if (size <= next) {
//		next = next - size;
//	}
//	return next;
//}
//int main(void) {
//	int N, idx = 0, cnt = 0;
//	bool first = true;
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++) {
//		int num;
//		scanf("%d", &num);
//		vec.push_back(num);
//	}
//	while (true) {
//		ch[idx] = true;
//		int next = idx + (vec[idx] - 3);
//		next = resize(next, vec.size());
// 		if (vec[next] == 3) {
//			vec.erase(vec.begin() + next);
//			cnt++;
//			idx = resize(next, vec.size());
//			for (int i = 0; i <= vec.size(); i++) {
//				ch[i] = false;
//			}
//		} else if (ch[next]) {
//			break;
//		} else {
//			idx = next;
//		}
//	}
//	printf("%d\n", cnt);
//	return 0;
//}