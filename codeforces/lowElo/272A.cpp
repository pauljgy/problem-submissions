#include <bits/stdc++.h>

int main()
{
	int n; std::cin >> n;

	std::vector<int> a(n);
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}

	int sum = std::accumulate(a.begin(), a.end(), 0);

	int ways = 0;

	for (int j = 1; j <= 5; j++) {
		if ((sum + j) % (n+1) != 1) ways++;
	}

	std::cout << ways << std::endl;

	return 0;
}