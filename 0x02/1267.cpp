#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, time[20], sum1 = 0, sum2 = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> time[i];
		sum1 += (time[i] / 30 + 1) * 10;
		sum2 += (time[i] / 60 + 1) * 15;
	}
	if (sum1 == sum2) cout << "Y M " << sum1;
	else if (sum1 > sum2) cout << "M " << sum2;
	else cout << "Y " << sum1;
	return 0;
}