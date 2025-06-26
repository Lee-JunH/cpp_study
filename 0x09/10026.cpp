#include <iostream>
#include <queue>
using namespace std;

char board[101][101];
bool vis[101][101];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int N;

void bfs(int i, int j) {
	queue<pair<int,int>> q;
	q.push({i,j});
	vis[i][j] = 1;
	while (!q.empty()) {
		auto cur = q.front();
		q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];
			if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
			if (vis[nx][ny] == 1 || board[i][j] != board[nx][ny]) continue;
			vis[nx][ny] = 1;
			q.push({nx,ny});
		}
	}
}

int area() {
	int ans = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!vis[i][j])
			{
				ans++;
				bfs(i,j);
			}
		}
	}
	return ans;
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> board[i][j];
		}
	}
	int ans = area();
	for (int i = 0; i < N; i++) {
		fill(vis[i], vis[i] + N, 0);
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (board[i][j] == 'G') board[i][j] = 'R';
		}
	}
	int not_ans = area();
	cout << ans << " " << not_ans;
	return 0;
}