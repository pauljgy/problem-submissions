#include <bits/stdc++.h>

int main()
{
	int n; std::cin>>n;

	std::vector<int> heights(n);

	for (int i = 0; i < n; i++) {
		std::cin >> heights[i];
	}

	int max = *std::max_element(heights.begin(), heights.end());
	int min = *std::min_element(heights.begin(), heights.end());
	
	int firstMaxLoc, firstMinLoc;

	for (int i = 0; i < n; i++) {
		if (heights[i] == max) {
			firstMaxLoc = i;
			break;
		}
	}

	for (int i = n-1; i >= 0; i--) {
		if (heights[i] == min) {
			firstMinLoc = i;
			break;
		}
	}

	int moves;

	if (firstMaxLoc > firstMinLoc) {
		moves = firstMaxLoc + (n - 1 - firstMinLoc) - 1;
	} else {
		moves = firstMaxLoc + (n - 1 - firstMinLoc);
	}

	std::cout << moves << std::endl;

	return 0;
}