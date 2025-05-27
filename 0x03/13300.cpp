#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k, gender, grade, count = 0;
	cin >> n >> k;
	int arr_m[7] = {}, arr_w[7] = {};
	for (int i = 0; i < n; i++) {
		cin >> gender >> grade;
		if (gender == 0) arr_w[grade]++;
		else arr_m[grade]++;
	}
	for (int j = 1; j < 7; j++) {
		if (arr_m[j] % k == 0) count += arr_m[j] / k;
		else count += arr_m[j] / k + 1;
		if (arr_w[j] % k == 0) count += arr_w[j] / k;
		else count += arr_w[j] / k + 1;
	}
	cout << count;
	return 0;
}