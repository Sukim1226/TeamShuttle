//too easy
//long long matter
#include <stdio.h>
int main(void) {
	long long int sum = 0;
	int N;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		sum += i * i;
	}
	printf("%lld\n", sum);
	return 0;
}