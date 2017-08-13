//Pell sequence
//long long 안써서 틀렸음
#include <stdio.h>
long long int arr[55] = { 0, 1 };
int main(void) {
	for (int i = 2; i <= 50; i++) {
		arr[i] = arr[i - 1] * 2 + arr[i - 2];
	}
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		int N;
		scanf("%d", &N);
		printf("%lld\n", arr[N]);
	}
	return 0;
}