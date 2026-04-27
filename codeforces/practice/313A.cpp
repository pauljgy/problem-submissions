#include <bits/stdc++.h>

int main()
{
	int n;

	std::cin >> n;

	int deleteLast = 0;
	
	if (n > 0) deleteLast = (n/10);
	else deleteLast = (-n/10)*-1;
	
	int deleteTens = 0;

	if (n > 0) {
		deleteTens = 10*(n/100) + (n % 10);
	} else {
		int tmp = -n;
		deleteTens = -1*(10*(tmp/100) + (tmp % 10));
	}

	std::vector<int> options = {n, deleteLast, deleteTens};

	int ret = *std::max_element(options.begin(), options.end());

	std::cout << ret << std::endl;

	return 0;
}