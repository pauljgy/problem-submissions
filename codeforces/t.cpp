#include <bits/stdc++.h>

void solve() {
	// code here
	long long n; std::cin >> n;

	long long bottom = 1;
	long long top = 3*n;

	for (int i = 0; i < n; i++) {
		std::cout << bottom++ << " ";
		std::cout << top-- << " ";
		std::cout << top-- << " ";
	}

	std::cout << std::endl;
}

int main()
{
	int t;
	std::cin >> t;

	while (t--) {
		solve();
	}
}