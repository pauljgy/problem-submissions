#include <bits/stdc++.h>

int main()
{
	int tmp;
	int pos = 0;

	for (int i = 0; i < 25; i++) {
		std::cin >> tmp;
		
		if (tmp == 1) pos = i;
	}

	int row = pos/5;
	int column = pos % 5;

	std::cout << std::abs(2-row) + std::abs(2-column) << std::endl;

	return 0;
}