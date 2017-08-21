#include <iostream>

typedef long long ll;

ll arr[51];

int main(){
	int test;
	scanf("%d", &test);
	arr[0] = 0;
	arr[1] = 1;
	for(int i = 2; i<=50; i++)
		arr[i] = 2*arr[i - 1] + arr[i - 2];
	while(test--){
		int n;
		scanf("%d", &n);
		printf("%lld\n", arr[n]);
	}
	return 0;
}
