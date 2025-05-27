#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	int arr[26] = {};
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		arr[s[i] - 'a'] += 1;
	}
	for (int j = 0; j < 26; j++) cout << arr[j] << ' ';
	return 0;
}