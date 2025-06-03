#include <iostream>
#include <deque>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, n;
	cin >> N;
	deque<int> D;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		if (s == "push_front") {
			cin >> n;
			D.push_front(n);
		}
		else if (s == "push_back") {
			cin >> n;
			D.push_back(n);
		}
		else if (s == "pop_front") {
			if (D.empty()) cout << -1 << "\n";
			else {
				cout << D.front() << "\n";
				D.pop_front();
			}
		}
		else if (s == "pop_back") {
			if (D.empty()) cout << -1 << "\n";
			else {
				cout << D.back() << "\n";
				D.pop_back();
			}
		}
		else if (s == "size") {
			cout << D.size() << "\n";
		}
		else if (s == "empty") {
			cout << D.empty() << "\n";
		}
		else if (s == "front") {
			if (D.empty()) cout << -1 << "\n";
			else cout << D.front() << "\n";
		}
		else if (s == "back") {
			if (D.empty()) cout << -1 << "\n";
			else cout << D.back() << "\n";
		}
	}
	return 0;
}