#include <iostream>
#include <list>
#include <queue>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, K;
	cin >> N >> K;
	list<int> Q;
	for (int i = 1; i <= N; i++) Q.push_back(i);
	cout << "<";
	while (!Q.empty()) {
		for (int i = 0; i < K - 1; i++) {
			Q.push_back(Q.front());
			Q.pop_front();
		}
		cout << Q.front();
		Q.pop_front();
		if (Q.size()) cout << ", ";
	}
	cout << ">";
	return 0;
}

// int main(void)
// {
// 	ios::sync_with_stdio(0);
// 	cin.tie(0);

// 	int N, K;
// 	cin >> N >> K;
// 	queue<int> Q;
// 	for (int i = 1; i <= N; i++) Q.push(i);
// 	cout << "<";
// 	while (!Q.empty()) {
// 		for (int i = 0; i < K - 1; i++) {
// 			Q.push(Q.front());
// 			Q.pop();
// 		}
// 		cout << Q.front();
// 		Q.pop();
// 		if (Q.size()) cout << ", ";
// 	}
// 	cout << ">";
// 	return 0;
// }