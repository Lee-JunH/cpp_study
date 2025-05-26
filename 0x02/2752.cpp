#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int a,b,c;
	int d,e,f;

	cin >> a >> b >> c;
	d = min({a, b, c});
	e = max({a, b, c});
	f = a + b + c - d - e;
	cout << d << ' ' << f << ' ' << e;
	return 0;
}