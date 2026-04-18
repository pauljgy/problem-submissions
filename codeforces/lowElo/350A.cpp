#include <bits/stdc++.h>

int main()
{
	int n, m;
	std::cin >> n >> m;

	int min_correct = INT_MAX;
	int max_correct = 0;
	int read;
	int min_wrong = INT_MAX;

	for (int i = 0; i < n; i++) {
		std::cin >> read;
		if (read < min_correct) min_correct = read;
		if (read > max_correct) max_correct = read;
	}

	for (int i = 0; i < m; i++) {
		std::cin >> read;
		if (read < min_wrong) min_wrong = read;
	}

	int ret;

	if (max_correct >= min_wrong || 2*min_correct >= min_wrong) {
		ret = -1;
	} else {
		ret = std::max(max_correct, 2*min_correct);
	}

	std::cout << ret << std::endl;

	return 0;
}