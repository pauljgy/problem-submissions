#include <bits/stdc++.h>

void solve() {
	// code here
	int64_t x, y;
	std::cin >> x >> y;

	std::cout << (y == 2*x ? "NO" : "YES") << std::endl;
}

int main()
{
	int t;
	std::cin >> t;

	while (t--) solve();

	return 0;
}