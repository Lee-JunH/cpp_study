#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a,b,c;
	cin >> a >> b >> c;
	int num[10] = {};
	int mul = a * b * c;
	while (mul) {
		num[mul % 10]++;
		mul /= 10;
	}
	for (int i = 0; i < 10; i++) cout << num[i] << "\n";
	return 0;
}