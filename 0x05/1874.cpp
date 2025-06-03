#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, cnt = 1, check = 0;
	cin >> n;
	stack<int> S;
	string ans;
	while (n--) {
		int input;
		cin >> input;
		while (cnt <= input) {
			S.push(cnt++);
			ans += "+\n";
		}
		if (S.top() != input) {
			cout << "NO\n";
			return 0;
		}
		S.pop();
		ans += "-\n";
	}
	cout << ans;
	return 0;
}
