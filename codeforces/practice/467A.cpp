#include <bits/stdc++.h>

int main()
{
	int n;
	std::cin >> n;

	int p, q;
	int ret = 0;

	for (int i = 0; i < n; i++) {
		std::cin >> p >> q;
		if (p + 2 <= q) ret++;
	}

	std::cout << ret << std::endl;

	return 0;
}