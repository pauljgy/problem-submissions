#include <bits/stdc++.h>

int main()
{
	int n; std::cin >> n;

	std::string ticket;
	std::cin >> ticket;

	std::vector<int> firstHalf(n);
	std::vector<int> secondHalf(n);

	for (int i = 0; i < n; i++) {
		firstHalf[i] = ticket[i] - '0';
	}

	for (int i = 0; i < n; i++) {
		secondHalf[i] = ticket[n+i] - '0';
	}

	std::sort(firstHalf.begin(), firstHalf.end());
	std::sort(secondHalf.begin(), secondHalf.end());

	bool unlucky = true;

	if (firstHalf[0] < secondHalf[0]) {
		for (int i = 1; i < n; i++) {
			if (firstHalf[i] >= secondHalf[i]) unlucky = false;
		}
	} else if (firstHalf[0] == secondHalf[0]) {
		unlucky = false;
	} else {
		for (int i = 1; i < n; i++) {
			if (firstHalf[i] <= secondHalf[i]) unlucky = false;
		}
	}

	std::cout << (unlucky ? "YES" : "NO") << std::endl;

	return 0;
}