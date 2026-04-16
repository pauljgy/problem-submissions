#include <bits/stdc++.h>

int main()
{
	long long n;
	std::cin >> n;

	if (n == 0) {
		std::cout << 1 << std::endl;
		return 0;
	}

	std::vector<int> cycle = {8, 4, 2, 6};

	int pos = (n - 1) % 4;

	std::cout << cycle[pos] << std::endl;

	return 0;
}