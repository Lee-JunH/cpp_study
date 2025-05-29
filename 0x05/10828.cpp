#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, a;
	cin >> N;
	stack<int> stk;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		if (s == "push") {
			cin >> a;
			stk.push(a);
		}
		else if (s == "pop") {
			if (stk.empty()) cout << -1 << "\n";
			else {
				cout << stk.top() << "\n";
				stk.pop();
			}
		}
		else if (s == "size") {
			cout << stk.size() << "\n";
		}
		else if (s == "empty") {
			cout << stk.empty() << "\n";
		}
		else if (s == "top") {
			if (stk.empty()) cout << -1 << "\n";
			else cout << stk.top() << "\n";
		}
	}
	return 0;
}