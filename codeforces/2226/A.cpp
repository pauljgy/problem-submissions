#include <bits/stdc++.h>

long long MOD = 676767677;

void solve() {
	// code here
	int n;
	std::cin >> n;

	std::vector<int> a(n);
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}

	long long totalCost = 0;
	int trailingOnes = 0;

	for (int i = 0; i < n; i++) {
		if (a[i] != 1) {
			totalCost += a[i];
		}
	}

	for (int i = n-1; i >= 0; i--) {
		if (a[i] == 1) {
			trailingOnes++;
		} else {
			break;
		}
	}

	if (trailingOnes > 0) {
		totalCost += 1;
	}

	std::cout << totalCost % MOD << std::endl;
}

int main()
{
	int t;
	std::cin >> t;

	while (t--) {
		solve();
	}
}