#include <bits/stdc++.h>

int main()
{
	// k + 2k + 3k + wk
	// k(1 + 2 + 3 + ... + w)
	// tc := k(w * (w+1) / 2)
	// cout << tc - n << endl;

	int k, n, w;
	std::cin >> k >> n >> w;

	int totalCost = k*w*(w+1)/2;

	std::cout << ((totalCost - n > 0) ? totalCost - n : 0) << std::endl;

	return 0;
}