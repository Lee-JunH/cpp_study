#include <iostream>
#include <queue>
using namespace std;

int board[502][502];
bool vis[502][502];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cin >> board[i][j];
	}
	int draw = 0;
	int width = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] == 0 || vis[i][j]) continue;
			draw++;
			queue<pair<int, int>> q;
			vis[i][j] = 1;
			q.push({i,j});
			int area = 0;
			while(!q.empty()) {
				area++;
				pair<int,int> cur = q.front();
				q.pop();
				for (int dir = 0; dir < 4; dir++) {
					int nx = cur.first + dx[dir];
					int ny = cur.second + dy[dir];
					if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
					if (vis[nx][ny] || board[nx][ny] != 1) continue;
					vis[nx][ny] = 1;
					q.push({nx,ny});
				}
			}
			width = max(width, area);
		}
	}
	cout << draw << '\n' << width;
	return 0;
}