#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	stack<char> st;
	cin >> s;
	int result = 0, temp = 1;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(') {
			st.push(s[i]);
			temp *= 2;
		}
		else if (s[i] == '[') {
			st.push(s[i]);
			temp *= 3;
		}
		else if (s[i] == ')') {
			if (st.empty() || st.top() != '(') {
				result = 0;
				break;
			}
			else if (s[i - 1] == '(') {
				result += temp;
				temp /= 2;
				st.pop();
			}
			else {
				temp /= 2;
				st.pop();
			}
		}
		else if (s[i] == ']') {
			if (st.empty() || st.top() != '[') {
				result = 0;
				break;
			}
			else if (s[i - 1] == '[') {
				result += temp;
				temp /= 3;
				st.pop();
			}
			else {
				temp /= 3;
				st.pop();
			}
		}
	}
	if (!st.empty()) result = 0;
	cout << result;
	return 0;
}