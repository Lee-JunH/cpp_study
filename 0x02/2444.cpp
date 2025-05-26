#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	for (int i = 0; i < 2 * N - 1; i++) {
		if (i > N - 1) {
			for (int j = 0; j < i - (N - 1); j++) cout << ' ';
			for (int k = 0; k < 2 * (2 * N - 1 - i) - 1; k++) cout << '*';
			cout << "\n";
		}
		else {
			for (int j = 0; j < N - i - 1; j++) cout << ' ';
			for (int k = 0; k < 2 * i + 1; k++) cout << '*';
			cout << "\n";
		}
	}
	return 0;
}