#include <bits/stdc++.h>

void swap(std::string& a, int x, int y)
{
	char t = a[x];
	a[x] = a[y];
	a[y] = t;
}

int main()
{
	int n, t;
	std::cin >> n >> t;

	std::string queue;
	std::cin >> queue;

	for (int seconds = 0; seconds < t; seconds++) {
		for (int i = 0; i < n - 1; i++) {
			if (queue[i] == 'B' && queue[i+1] == 'G') {
				swap(queue, i, i+1);
				i++;
			}
		}
	}

	std::cout << queue << std::endl;

	return 0;
}