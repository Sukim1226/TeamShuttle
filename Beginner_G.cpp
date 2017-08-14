/*
	Fish Robot
	hingook
*/

#include <iostream>
#include <algorithm>

using namespace std;

int arr[501][501];
int check[501][501];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
int PARTS[500];

int n, m, cnt = 0, parts, tmp;
int MAX = -999999;

void dfs(int x, int y, int path){
	//printf("%d %d %d %d\n", x, y, path, parts);
	check[x][y] = 1;
	for(int i = 0; i<4; i++){
		if(arr[x + dx[i]][y + dy[i]] == 4){
			PARTS[cnt++] = parts;
			parts = tmp;
			return;
		}
		if(!arr[x + dx[i]][y + dy[i]] && x + dx[i] >= 1 && x + dx[i] <= n && y + dy[i] >= 1 && y + dy[i] <= m && !check[x + dx[i]][y + dy[i]]){
			if(path == i)
				dfs(x + dx[i], y + dy[i], i);
			else{
				parts--;
				dfs(x + dx[i], y + dy[i], i);
			}
		}
	}
}

int main(){
	scanf("%d %d %d", &n, &m, &parts);
	tmp = parts;
	for(int i = 1; i<=n; i++){
		for(int j = 1; j<=m; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	for(int i = 1; i<=n; i++){
		for(int j = 1; j<=m; j++){
			if(arr[i][j] == 3){
				dfs(i, j, -1);
				break;
			}
		}
	}
	for(int i = 0; i<cnt; i++){
		printf("%d\n", PARTS[i]);
		MAX  = max(PARTS[i], MAX);
	}
	if(MAX >= 0)
		printf("Will you marry me?\n");
	else
		printf("No dap\n");
	
	return 0;
}
