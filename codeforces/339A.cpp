#include <bits/stdc++.h>

int main()
{
	// read in the string
	// count frequency of numbers
	// build a new string with the above info.

	std::string first;

	std::cin >> first;

	int n = first.length();
	int ones = 0, twos = 0, threes = 0;
	char scan;

	for (int i = 0; i < n; i += 2) {
		scan = first[i];

		if (scan == '1') ones++;
		else if (scan == '2') twos++;
		else threes++;
	}

	std::string result;

	while (ones > 0) {
		result = result + "+1";
		ones--;
	}

	while (twos > 0) {
		result = result + "+2";
		twos--;
	}

	while (threes > 0) {
		result = result + "+3";
		threes--;
	}

	result.erase(0, 1);

	std::cout << result << std::endl;

	return 0;
}