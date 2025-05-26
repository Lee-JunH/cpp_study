#include <iostream>

using namespace std;

int main(void)
{
	int in, res;
	string s = "DCBAE";
	for (int i = 0; i < 3; i++) {
		res = 0;
		for (int j = 0; j < 4; j++) {
			cin >> in;
			res += in;
		}
		cout << s[res] << "\n";
	}
	return 0;	
}	