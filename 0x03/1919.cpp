#include <iostream>

using namespace std;

int main(void)
{
	ios:: sync_with_stdio(0);
	cin.tie(0);

	string s1, s2;
	cin >> s1 >> s2;
	int alpha[26] = {}, count = 0;
	for (auto i : s1) alpha[i - 'a']++;
	for (auto i : s2) alpha[i - 'a']--;
	for (int i = 0; i < 26; i++) {
		if (alpha[i] != 0) {
			if (alpha[i] < 0) count += -alpha[i];
			else count += alpha[i];
		}
	}
	cout << count;
	return 0;
}