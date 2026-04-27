#include <bits/stdc++.h>

int main()
{
	uint64_t a, b, n;
	std::cin >> a >> b >> n;

	// brute force?
	bool lengthable = false;

	for (int j = 0; j < 10; j++) {
		// test a * 10 + j
		uint64_t test = 10*a + j;

		if (test % b == 0) {
			a = test;
			lengthable = true;
			break;
		}
	}

	if (!lengthable) {
		std::cout << "-1" << std::endl;
		return 0;
	}

	std::cout << a;

	for (int i = 0; i < n -1; i++) {
		std::cout << "0";
	}

	std::cout << std::endl;

	return 0;
}