#include <bits/stdc++.h>

int main()
{
	int n; std::cin >> n;

	std::vector<std::vector<int>> segments(n, std::vector<int> (2, 0));

	for (int i = 0; i < n; i++) {
		std::cin >> segments[i][0] >> segments[i][1];
	}

	// choose max. width? can do wlog
	// then check if it contains all the others

	int maxWidth = -1, index = -1;

	for (int i = 0; i < n; i++) {
		std::vector<int> segment = segments[i];
		int width = segment[1] - segment[0];

		if (width > maxWidth) {
			maxWidth = width;
			index = i;
		}
	}

	// then check if segments[index] covers all others
	bool cover = true;
	std::vector<int> candidate = segments[index];

	for (int i = 0; i < n; i++) {
		std::vector<int> segment = segments[i];

		// check candidate[0] <= segment[0] and ...
		if (candidate[0] <= segment[0] && candidate[1] >= segment[1]) continue;
		else cover = false;
	}

	std::cout << (cover ? index+1 : -1) << std::endl;

	return 0;
}