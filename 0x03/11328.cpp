#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	string s, s_fry;
	for (int i = 0; i < N; i++) {
		int arr[26] = {};
		cin >> s >> s_fry;
		for (int j = 0; j < s.length(); j++) {
			arr[s[j] - 'a']++;
		}
		for (int k = 0; k < s_fry.length(); k++) {
			arr[s_fry[k] - 'a']--;
		}
		for (int l = 0; l < 26; l++) {
			if (arr[l] != 0) {
				cout << "Impossible" << "\n";
				break;
			}
			if (l == 25) cout << "Possible" << "\n";
		}
	}
	return 0;
}