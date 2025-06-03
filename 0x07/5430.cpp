#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

void parse(string& tmp, deque<int>& D){
  int cur = 0;
  for(int i = 1; i+1 < tmp.size(); i++)
  {
    if(tmp[i] == ','){
      D.push_back(cur);
      cur = 0;
    }
    else{
      cur = 10 * cur + (tmp[i] - '0');
    }
  }
  if(cur != 0)
    D.push_back(cur);
}

void print_result(deque<int>& d){
  cout << '[';
  for(int i = 0; i < d.size(); i++)
  {
    cout << d[i];
    if(i+1 != d.size())
      cout << ',';
  }
  cout << "]\n";
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string s, tmp;
		cin >> s;
		int n, error = 0, rev = 0;
		cin >> n;
		cin >> tmp;
		deque<int> D;
		parse(tmp, D);
		for (char c : s) {
			if (c == 'D') {
				if (D.empty()) {
					error = 1;
					break;
				}
				if(!rev) D.pop_front();
				else D.pop_back();
			}
			else if (c == 'R') {
				rev = 1 - rev;
			}
		}
		if (!error) {
			if(rev) reverse(D.begin(), D.end());
			print_result(D);
		}
		else cout << "error" << "\n";
	}
	return 0;
}