#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int a[9], b[2], sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> a[i];
		sum += a[i];
	}
	sort(a, a + 9);
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (a[i] + a[j] == sum - 100) {
				for (int k = 0; k < 9; k++) {
					if (k != i && k != j) cout << a[k] << "\n";
				}
				return 0;
			}
		}
	}
	return 0;
}