#include <iostream>

using namespace std;

int main(void)
{
	int input, min = 0, sum = 0, odd = 0;
	for (int i = 0; i < 7; i++) {
		cin >> input;
		if (input % 2 == 1) {
			if (++odd == 1) min = input;
			sum += input;
			if (min > input) min = input;
		}
	}
	if (odd == 0) cout << "-1";
	else cout << sum << "\n" << min;
	return 0;
}