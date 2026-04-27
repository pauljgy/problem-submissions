#include <bits/stdc++.h>

int main()
{
	int n, k;
	std::cin >> n >> k;

	std::vector<int> a(n);

	for (int i = 0; i < n; i++) std::cin >> a[i];

	int count = 0;
	int threshold = a[k-1];

	for (int j = 0; j < n; j++) {
		if (a[j] >= threshold && a[j] > 0)
			count++;
	}

	std::cout << count << std::endl;

	return 0;
}