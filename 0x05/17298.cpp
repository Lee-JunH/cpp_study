#include <iostream>
#include <stack>

using namespace std;

int arr[1000001];
int nge[1000001];
stack<int> S;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) cin >> arr[i];

	for (int i = 0; i < N; i++) {
		while (!S.empty() && arr[S.top()] < arr[i]) {
			nge[S.top()] = arr[i];
			S.pop();
		}
		S.push(i);
	}

	while (!S.empty()) {
		nge[S.top()] = -1;
		S.pop();
	}
	for (int i = 0; i < N; i++) cout << nge[i] << " ";
	return 0;
}