#include <bits/stdc++.h>

int main()
{
	// a*(3^t)
	// b*(2^t).
	// a3^t > b2^t.
	// (3/2)t > b/a
	// t > log()

	double a, b;
	std::cin >> a >> b;

	double ratio = b/a;
	double exact = std::log(ratio)/std::log(1.5);

	int t = std::floor(exact) + 1;

	std::cout << t << std::endl;

	return 0;
}