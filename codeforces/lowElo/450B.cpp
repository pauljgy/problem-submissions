#include <bits/stdc++.h>

const long long MOD = 1000000007;

int main()
{
	// f i+1 = fi - fi-1
	int64_t x, y, n;
	std::cin >> x >> y >> n;

	std::vector<int64_t> rotation = { x, y, y-x, -x, -y, -y+x };

	for (auto& x : rotation) {
		x = ((x % MOD) + MOD) % MOD;
	    }
	
	int64_t ret = rotation[(n-1) % 6];

	std::cout << ((ret % MOD) + MOD) % MOD << std::endl;
}