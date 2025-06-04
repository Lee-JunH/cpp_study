#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	while (1) {
		string s;
		getline(cin, s);
		if (s == ".") break;
		stack<char> S;
		int error = 0;
		for (auto c : s) {
			if (c == '(' || c == '[') S.push(c);
			else if (c == ')') {
				if (S.empty() || S.top() != '(') {
					error = 1;
					break;
				}
				S.pop();
			}
			else if (c == ']') {
				if (S.empty() || S.top() != '[') {
					error = 1;
					break;
				}
				S.pop();
			}
		}
		if (!S.empty()) error = 1;
		if (error == 1) cout << "no\n";
		else cout << "yes\n";
	}
	return 0;
}