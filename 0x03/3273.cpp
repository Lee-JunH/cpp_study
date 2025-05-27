#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, sum, count = 0;
	cin >> n;
	int s[100001] = {};
	for (int i = 0; i < n; i++) cin >> s[i];
	cin >> sum;
	for (int j = 0; j < n; j++) {
		for (int k = j + 1; k < n; k++) {
			if (s[j] + s[k] == sum) count++;
		}
	}
	cout << count;
	return 0;
}