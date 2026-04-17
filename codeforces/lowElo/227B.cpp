#include <bits/stdc++.h>

int linearSearch(std::vector<int> a, int query)
{
	int index = 0;

	while (index < a.size()) {
		if (a[index] == query) return index;
		index++;
	}

	return -1;
}

int main()
{
	uint64_t n;
	std::cin >> n;

	uint64_t tmp;

	std::unordered_map<uint64_t, uint64_t> indices; 
	for (int i = 0; i < n; i++) {
		std::cin >> tmp;
		indices[tmp] = i;
	}

	uint64_t m;
	std::cin >> m;

	std::vector<uint64_t> queries(m);
	for (int i = 0; i < m; i++) std::cin >> queries[i];

	uint64_t vasya = 0, petya = 0;

	for (int i = 0; i < m; i++) {
		uint64_t index = indices[queries[i]];

		vasya += index + 1;
		petya += n - index;
	}

	std::cout << vasya << " " << petya << std::endl;

	return 0;
}