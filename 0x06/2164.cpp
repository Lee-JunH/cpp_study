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

	for (int i = 1; i <= N; i++) Q.push(i);
	while (Q.size() != 1) {
		Q.pop();
		int temp = Q.front();
		Q.push(temp);
		Q.pop();
	}
	cout << Q.front();
	return 0;
}