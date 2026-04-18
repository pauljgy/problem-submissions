#include <bits/stdc++.h>

int main()
{
	int n, m, d;
	std::cin >> n >> m >> d;

	std::vector<std::vector<int>> matrix(n, std::vector<int>(m, 0));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cin >> matrix[i][j];
		}
	}

	int candidate = matrix[0][0] % d;
	bool feasible = true;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (matrix[i][j] % d != candidate) {
				feasible = false;
			}
		}
	}

	if (!feasible) {
		std::cout << -1 << std::endl;
		return 0;
	}

	std::vector<int> flatten(n*m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			flatten[m*i + j] = matrix[i][j];
		}
	}

	std::sort(flatten.begin(), flatten.end());

	int median = flatten[flatten.size()/2];

	int moves = 0;

	for (int i = 0; i < n*m; i++) {
		moves += std::abs(flatten[i] - median) / d;
	}

	std::cout << moves << std::endl;
}