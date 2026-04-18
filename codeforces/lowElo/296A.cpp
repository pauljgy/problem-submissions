#include <bits/stdc++.h>

int main()
{
	double n; std::cin >> n;

	std::unordered_map<int, int> a;
	int read;
	double max = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> read;
		a[read]++;

		if (a[read] > max) max = a[read];
	}

	std::cout << (max > std::ceil(n/2) ? "NO" : "YES") << std::endl;

	return 0;
}