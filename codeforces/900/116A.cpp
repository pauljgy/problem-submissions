#include <bits/stdc++.h>

int main()
{
	int n;
	std::cin >> n;

	std::vector<int> a(n);
	std::vector<int> b(n);

	for (int i = 0; i < n; i++) {
		std::cin >> a[i] >> b[i];
	}

	int runningMax = 0;
	int currentPassengers = 0;

	for (int i = 0; i < n; i++) {
		currentPassengers += (-a[i] + b[i]);
		
		if (currentPassengers > runningMax) {
			runningMax = currentPassengers;
		}
	}

	std::cout << runningMax << std::endl;

	return 0;
}