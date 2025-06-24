#include <iostream>
#include <queue>
using namespace std;

string board[1002];
int dist[1002][1002];
int dist_j[1002][1002];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int R, C, x, y;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> R >> C;

	for (int i = 0; i < R; i++) {
		fill(dist[i], dist[i] + C, -1);
		fill(dist_j[i], dist_j[i] + C, -1);
	}
	queue<pair<int,int>> q;
	for (int i = 0; i < R; i++) {
		cin >> board[i];
		for (int j = 0; j < C; j++) {
			if (board[i][j] == 'F') {
				q.push({i,j});
				dist[i][j] = 0;
			}
			if (board[i][j] == 'J') {
				x = i;y = j;
				dist_j[i][j] = 0;
			}
		}
	}
	while (!q.empty()) {
		auto cur = q.front();
		q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];
			if (nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
			if (board[nx][ny] == '#' || dist[nx][ny] >= 0) continue;
			dist[nx][ny] = dist[cur.first][cur.second] + 1;
			q.push({nx,ny});
		}
	}
	q.push({x,y});
	while (!q.empty()) {
		auto cur = q.front();
		q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];
			if (nx < 0 || nx >= R || ny < 0 || ny >= C) {
				cout << dist_j[cur.first][cur.second] + 1;
				return 0;
			}
			if (board[nx][ny] == '#' || dist_j[nx][ny] >= 0) continue;
			if (dist[nx][ny] != -1 && dist[nx][ny] <= dist_j[cur.first][cur.second] + 1) continue;
			dist_j[nx][ny] = dist_j[cur.first][cur.second] + 1;
			q.push({nx,ny});
		}
	}
	cout << "IMPOSSIBLE";
	return 0;
}