#include <iostream>

typedef long long ll;

int main(){
	ll n, sum = 0; 
	scanf("%lld", &n);
	for(int i = 1; i<=n; i++){
		sum += i*i;
	}
	printf("%lld", sum);
	
	return 0;
}
