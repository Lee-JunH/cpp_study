#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	queue<int> Q;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		int n;
		if (s == "push") {
			cin >> n;
			Q.push(n);
		}
		else if (s == "pop") {
			if (Q.empty()) {
				cout << -1 << "\n";
				continue;
			}
			cout << Q.front() << "\n";
			Q.pop();
		}
		else if (s == "size") {
			cout << Q.size() << "\n";
		}
		else if (s == "empty") {
			cout << Q.empty() << "\n";
		}
		else if (s == "front") {
			if (Q.empty()) {
				cout << -1 << "\n";
				continue;
			}
			cout << Q.front() << "\n";
		}
		else if (s == "back") {
			if (Q.empty()) {
				cout << -1 << "\n";
				continue;
			}
			cout << Q.back() << "\n";
		}
	}
	return 0;
}