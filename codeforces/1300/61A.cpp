#include <bits/stdc++.h>

int main()
{
	std::string a, b;
	std::cin >> a >> b;

	std::string c;
	int n = a.length();

	for (int i = 0; i < n; i++) {
		c += (a[i] == b[i]) ? "0" : "1";
	}

	std::cout << c << std::endl;
	return 0;
}