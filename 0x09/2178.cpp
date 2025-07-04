#include <iostream>
#include <queue>
using namespace std;

string board[102];
int dist[102][102];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> board[i];
	}
	for (int i = 0; i < N; i++) {
		fill(dist[i], dist[i] + M, -1);
	}
	queue<pair<int,int>> q;
	q.push({0,0});
	dist[0][0] = 0;
	while (!q.empty()) {
		pair<int,int> cur = q.front();
		q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];
			if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
			if (board[nx][ny] != '1' || dist[nx][ny] >= 0) continue;
			dist[nx][ny] = dist[cur.first][cur.second] + 1;
			q.push({nx,ny});
		}
	}
	cout << dist[N-1][M-1] + 1;
	return 0;
}