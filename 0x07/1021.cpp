#include <iostream>
#include <deque>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, M, cnt = 0, idx;
	cin >> N >> M;
	deque<int> D;
	for (int i = 1; i <= N; i++) D.push_back(i);
	while (M--) {
		int n;
		cin >> n;
		for (int i = 0; i < D.size(); i++) {
			if (D[i] == n) {
				idx = i;
				break;
			}
		}
		while (D.front() != n) {
			if (idx <= D.size() / 2) {
				D.push_back(D.front());
				D.pop_front();
			}
			else {
				D.push_front(D.back());
				D.pop_back();
			}
			cnt++;
		}
		D.pop_front();
	}
	cout << cnt;
	return 0;
}