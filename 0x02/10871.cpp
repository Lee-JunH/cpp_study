#include <iostream>

using namespace std;

int main(void)
{
	int N, X, s[10001];
	cin >> N >> X;
	for (int i = 0; i < N; i++) cin >> s[i];
	for (int j = 0;j < N; j++)
		if (s[j] < X) cout << s[j] << " ";
	return 0;
}