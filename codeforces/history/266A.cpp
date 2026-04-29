#include <bits/stdc++.h>

int main()
{
	int n;
	std::string marbles;

	std::cin >> n;
	std::cin >> marbles;

	int ret = 0;
	char lastColor = marbles[0];

	for (int i = 1; i < n; i++) {
		if (marbles[i] == lastColor) {
			ret++;
		} else {
			lastColor = marbles[i];
		}
	}

	std::cout << ret << std::endl;

	return 0;
}