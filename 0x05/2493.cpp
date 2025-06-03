#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, cnt = 0;
	cin >> N;
	stack<pair<int, int>> S;
	S.push({100000001, 0});
	for (int i = 1; i <= N; i++) {
		int input;
		cin >> input;
		while (S.top().first < input) {
			S.pop();
		}
		cout << S.top().second << " ";
		S.push({input, i});
	}
}

// stack 이용하기

// int main(void)
// {
// 	ios::sync_with_stdio(0);
// 	cin.tie(0);

// 	int N, cnt = 0;
// 	cin >> N;
// 	stack<pair<int, int>> S;
// 	S.push({100000001, 0});
// 	for (int i = 0; i < N; i++) {
// 		int input;
// 		cin >> input;
// 		if (S.top().first < input) {
// 			while (!S.empty()) S.pop();
// 		}
// 		else cnt = S.top().second;
// 		S.push({input, i + 1});
// 		cout << cnt << ' ';
// 	}
// 	return 0;
// }

// stack 안쓰고 풀기 (시간 초과)
// int main(void)
// {
// 	ios::sync_with_stdio(0);
// 	cin.tie(0);

// 	int N;
// 	cin >> N;
// 	for (int i = 0; i < N; i++) cin >> arr[i];
// 	for (int i = 0; i < N; i++) {
// 		int cnt = 0;
// 		for (int j = i - 1; j >= 0; j--) {
// 			if (arr[i] < arr[j]) {
// 				cnt = j + 1;
// 				break;
// 			}
// 		}
// 		cout << cnt << ' ';
// 	}
// 	return 0;
// }
