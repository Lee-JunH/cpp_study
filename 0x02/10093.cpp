#include <iostream>

using namespace std;

int main(void)
{
	long long A,B;
	cin >> A >> B;
	if (A > B) swap(A, B);
	if (A == B || B == A + 1) cout << 0;
	else {
		cout << B - A - 1 << "\n";
		for (long long i = A + 1; i < B; i++) {
			cout << i << ' ';
		}
	}
}