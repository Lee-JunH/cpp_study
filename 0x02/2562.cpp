#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[9], max = 0, idx = 0;
	for (int i = 0; i < 9; i++) cin >> arr[i];
	for (int j = 0; j < 9; j++) {
		if (arr[j] > max) {
			max = arr[j];
			idx = j;
		}
	}
	cout << max << "\n" << idx + 1;
	return 0;
}