#include <bits/stdc++.h>

int main()
{
	int n; std::cin >> n;

	int a[1001] = {}, b[1001] = {}, count[1001] = {};

	for (int i = 0; i < n; i++) {
		std::cin >> a[i] >> b[i];
		count[b[i]]++;
	}

	int bottleClosed = 0;

	for (int i = 0; i < n; i++) {
		count[b[i]]--;
		if (count[a[i]] == 0) bottleClosed++;
		count[b[i]]++;
	}

	std::cout << bottleClosed << std::endl;

	return 0;
}