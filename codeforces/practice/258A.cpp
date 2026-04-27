#include <bits/stdc++.h>

int main()
{
	std::string binary;
	std::cin >> binary;

	for (int i = 0; i < binary.length(); i++) {
		if (binary[i] == '0') {
			binary.erase(i, 1);
			break;
		}

		if (i == binary.length() - 1) {
			binary.erase(i, 1);
		}
	}

	std::cout << binary << std::endl;

	return 0;
}