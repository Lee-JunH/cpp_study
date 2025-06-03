#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	stack<int> S;
	long long sum = 0;
	for (int i = 1; i <= N; i++) {
		long long input;
		cin >> input;
		while (!S.empty()) {
			if (S.top() > input)
				break;
			S.pop();
		}
		sum += S.size();
		S.push(input);
	}
	cout << sum;
	return 0;
}