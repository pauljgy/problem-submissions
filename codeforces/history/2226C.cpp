#include <bits/stdc++.h>

void solve() {
	// code here
	long long n;
	std::cin >> n;

	std::vector<long long> a(n, 0);

	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}

	int total = 0;

	std::sort(a.begin(), a.end());

	while (total < n) {
		if (a[total] == total || a[total] > 2*total) {
			total++;
		} else {
			break;
		}
	}

	std::cout << total << std::endl;
}

int main()
{
	int t;
	std::cin >> t;

	while (t--) {
		solve();
	}
}