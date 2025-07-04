#include <iostream>
#include <queue>
using namespace std;

int board[1002][1002];
int dist[1002][1002];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int N, M;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> M >> N;
	queue<pair<int,int>> q;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> board[i][j];
			if (board[i][j] == 1) {
				q.push({i,j});
			}
			if (board[i][j] == 0) {
				dist[i][j] = -1;
			}
		}
	}
	while (!q.empty()) {
		pair<int,int> cur = q.front();
		q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];
			if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
			if (dist[nx][ny] >= 0) continue;
			dist[nx][ny] = dist[cur.first][cur.second] + 1;
			q.push({nx,ny});
		}
	}
	int ans = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (dist[i][j] == -1) {
				cout << -1;
				return 0;
			}
			ans = max(ans, dist[i][j]);
		}
	}
	cout << ans;
	return 0;
}