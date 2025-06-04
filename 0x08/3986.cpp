#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		stack<char> S;
		for (auto c : s) {
			if (!S.empty() && S.top() == c) S.pop();
			else S.push(c);
		}
		if (S.empty()) cnt++;
	}
	cout << cnt;
	return 0;
}