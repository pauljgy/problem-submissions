#include <bits/stdc++.h>

void solve() {
	// code here
	int n;
	std::cin >> n;

	std::string s;
	std::cin >> s;

	int left = 0;
	int right = 0;

	for (int i = 0; i < n; i++) {
		if (s[i] == '(') left++;
		else right++;
	}

	std::cout << (left == right ? "YES" : "NO") << std::endl;
}

int main()
{
	int t;
	std::cin >> t;

	while (t--) {
		solve();
	}
}