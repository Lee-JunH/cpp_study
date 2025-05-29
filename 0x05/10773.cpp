#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, a, sum = 0;
	cin >> N;
	stack<int> S;
	for (int i = 0; i < N; i++) {
		cin >> a;
		if (a == 0) {
			sum -= S.top();
			S.pop();
		}
		else {
			S.push(a);
			sum += a;
		}
	}
	cout << sum;
	return 0;
}