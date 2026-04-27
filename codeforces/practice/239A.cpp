#include <bits/stdc++.h>

int main()
{
	int y, k, n;

	std::cin >> y >> k >> n;

	std::vector<int> x;

	// go thru multiples of k up to n

	for (int i = 0; i*k <= n; i++) {
		if (i*k <= y) continue;

		x.push_back(i*k - y);
	}

	if (x.size() == 0) {
		std::cout << -1 << std::endl;
	} else {
		for (auto& num : x) {
			std::cout << num << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}