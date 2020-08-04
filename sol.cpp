#include <bits/stdc++.h>

using namespace std;

void test_case() {
	string s;
	cin >> s;
	int n = (int) s.size();
	if(s[n-2] == 'p' && s[n-1] == 'o') {
		cout << "FILIPINO";
	}
	else if(s[n-2] == 's' && s[n-1] == 'u') {
		cout << "JAPANESE";
	}
	else if(s[n-2] == 'd' && s[n-1] == 'a') {
		cout << "KOREAN";
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	for(int nr = 1; nr <= T; ++nr) {
		test_case();
	}
	//test_case();
	return 0;
}
