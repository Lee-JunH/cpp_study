#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, num[10] = {}, max = 0;
	cin >> N;
	while (N) {
		num[N % 10]++;
		N /= 10;
	}
	for (int i = 0; i < 10; i++) {
		if (i == 6 || i == 9) continue;
		if (num[i] > max) max = num[i];
	}
	if (max >= (num[6] + num[9] + 1) / 2) cout << max;
	else cout << (num[6] + num[9] + 1) / 2;
	return 0;
}