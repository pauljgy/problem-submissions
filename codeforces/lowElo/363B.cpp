#include <bits/stdc++.h>

int main()
{
	long n, k;

	std::cin >> n >> k;

	std::vector<int> h(n);
	int sum = 0;
	int index = 0;

	for (int i = 0; i < n; i++) {
		std::cin >> h[i];
	}

	for (int i = 0; i < k; i++) {
		sum += h[i];
	}

	int min = sum;

	for (int i = k; i < n; i++) {
		sum += h[i];
		sum -= h[i - k];

		if (sum < min) {
			min = sum;
			index = i - k + 1;
		}
	}

	std::cout << index + 1 << std::endl;

	return 0;
}