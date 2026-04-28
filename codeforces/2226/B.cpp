#include <bits/stdc++.h>

void solve() {
	// code here
	long long n;
	std::cin >> n;

	std::vector<long long> p(n, 0);
	for (int i = 0; i < n; i++) {
		std::cin >> p[i];
	}

	long long pairs = 0;

	for (int i = 0; i < n-1; i++) {
		long long a = std::min(p[i], p[i+1]);
		long long b = std::max(p[i], p[i+1]);

		if (b-a == 1) {
			pairs++;
		} else if (b == 2*a) {
			pairs++;
		}
	}

	std::cout << pairs << std::endl;
}

int main()
{
	int t;
	std::cin >> t;

	while (t--) {
		solve();
	}
}