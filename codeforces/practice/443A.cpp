#include <bits/stdc++.h>

int main()
{
	std::string input;
	std::getline(std::cin, input);

	int n = input.length();

	if (n == 2) {
		std::cout << 0 << std::endl;
		return 0;
	}

	if (n == 3) {
		std::cout << 1 << std::endl;
		return 0;
	}

	std::set<char> s1;
	char c;

	for (int i = 1; i < n; i += 3) {
		c = input[i];
		s1.insert(c);
	}

	std::cout << s1.size() << std::endl;

	return 0;
}