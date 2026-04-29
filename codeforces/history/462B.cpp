#include <bits/stdc++.h>

int main()
{
	uint64_t n, k;
	std::cin >> n >> k;
	
	std::string cards;
	std::cin >> cards;

	std::unordered_map<char, uint64_t> freq;
	for (char &c : cards)
		freq[c]++;
	
	std::vector<uint64_t> values;
	for (const auto &[k, v] : freq) {
		values.push_back(v);
	}

	std::sort(values.begin(), values.end());

	uint64_t end = values.size() - 1;

	uint64_t cards_picked = 0;
	uint64_t coins = 0;

	while (cards_picked < k) {
		uint64_t pick_up = std::min(k-cards_picked, values[end]);
		cards_picked += pick_up;
		coins += pick_up * pick_up;
		end -= 1;
		if (end == -1) break;
	}

	std::cout << coins << std::endl;

	return 0;
}