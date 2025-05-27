#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, num, count = 0;
	cin >> n;
	int s[101] = {};
	for (int i = 0; i < n; i++) cin >> s[i];
	cin >> num;
	for (int j = 0; j < n; j++) {
		if (s[j] == num) count++;
	}
	cout << count;
	return 0;
}