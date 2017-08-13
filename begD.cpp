//Milk theif
//thought it was dfs but dp
//right, down, diagonal move -> dp
#include <stdio.h>
int arr[505][505];
int dp[505][505];
int dx[] = { 1, 0, 1 };
int dy[] = { 0, 1, 1 };
int max(int a, int b) {
	return a > b ? a : b;
}
int main(void) {
	int m, n;
	scanf("%d %d", &m, &n);
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	dp[1][1] = arr[1][1];
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			if (arr[i][j] == 0) {
				continue;
			}
			for (int k = 0; k < 3; k++) {
				if (dp[i - dx[k]][j - dy[k]] != 0) {
					dp[i][j] = max(dp[i][j], arr[i][j] + dp[i - dx[k]][j - dy[k]]);
				}
			}
		}
	}
	printf("%d\n", dp[m][n]);
	return 0;
}