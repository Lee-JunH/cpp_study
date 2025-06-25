#include <iostream>
#include <queue>
using namespace std;

int T, M, N, K;
bool vis[51][51];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int board[51][51];
queue<pair<int,int>> q;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> T;
	while (T--) {
		cin >> M >> N >> K;
		int a, b;
		for (int i = 0; i < K; i++) {
			cin >> a >> b;
			board[b][a] = 1;
		}
		int worm = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (board[i][j] == 0 || vis[i][j] != false) continue;
				vis[i][j] = true;
				q.push({i,j});
				while (!q.empty()) {
					auto cur = q.front();
					q.pop();
					for (int dir = 0; dir < 4; dir++) {
						int nx = cur.first + dx[dir];
						int ny = cur.second + dy[dir];
						if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
						if (vis[nx][ny] || board[nx][ny] != 1) continue;
						vis[nx][ny] = true;
						q.push({nx,ny});
					}
				}
				worm++;
			}
		}
		cout << worm << "\n";
		for (int i = 0; i < N; i++) {
			fill(board[i], board[i] + M, 0);
			fill(vis[i], vis[i] + M, false);
		}
	}
	return 0;
}