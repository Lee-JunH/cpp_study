#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s2;
	cin >> s2;
	int i = 0;
	int count = 0;
	int result = 0;
	while (s2[i] != 0) {
		if (s2[i] == '(' && s2[i + 1] == ')') {
			result += count;
			i++;
		}
		else if (s2[i] == '(') {
			count++;
		}
		else if (s2[i] == ')') {
			count--;
			result++;
		}
		i++;
	}
	cout << result;	
	return 0;
}