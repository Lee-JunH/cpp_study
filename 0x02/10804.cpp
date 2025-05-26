#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a,b,card[20];
	for (int i = 0; i < 20; i++) card[i] = i + 1;
	for (int j = 0; j < 10; j++) {
		cin >> a >> b;
		for (int k = 0; k < (b - a + 1) / 2 ; k++)
			swap(card[a + k - 1], card[b - k - 1]);
	}
	for (int k = 0; k < 20; k++) cout << card[k] << ' ';
	return 0;
}