#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - i - 1; j++) cout << ' ';
		for (int k = 0; k < i + 1; k++) cout << '*';
		cout << "\n";
	}
	return 0;
}