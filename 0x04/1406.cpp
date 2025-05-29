#include <iostream>
#include <list>

using namespace std;

string arr;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	
	cin >> arr;
	list<char> L;
	for (auto c : arr) L.push_back(c);
	auto cursor = L.end();
	int M;
	cin >> M;
	for (int i = 0; i < M; i++) {
		char c;
		cin >> c;
		if (c == 'L') {
			if (cursor != L.begin()) cursor--;
		}
		else if (c == 'D') {
			if (cursor != L.end()) cursor++;
		}
		else if (c == 'P') {
			char c2;
			cin >> c2;
			L.insert(cursor, c2);
		}
		else {
			if (cursor != L.begin()) {
				cursor--;
				cursor = L.erase(cursor);
			}
		}
	}
	for (auto c : L) cout << c;
	return 0;
}