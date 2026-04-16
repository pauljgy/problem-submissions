#include <bits/stdc++.h>

int main()
{
	int x;
	std::cin >> x;

	int fiveJumps = 0;
	int remainder = 0;

	fiveJumps = (int) x/5;
	remainder = (x % 5 > 0) ? 1 : 0;

	std::cout << (fiveJumps + remainder) << std::endl;

	return 0;
}