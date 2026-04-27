#include <bits/stdc++.h>

int main()
{
	int n; std::cin >> n;

	std::vector<int> a(n);

	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}

	if (n == 1) {
		std::cout << "yes" << std::endl;
		std::cout << "1 1" << std::endl;
		return 0;
	}

	// find decreasing segments

	std::vector<std::vector<int>> segments;

	int pos = 1;

	while (pos < n) {
		// is there one starting at pos? then find the full length of it
		if (a[pos] < a[pos-1]) {
			// find full length
			int start = pos-1;
			int end = pos;
			while (end < n && a[end] < a[end-1]) {
				end++;
			}
			// add to segments
			segments.push_back({start, end-1});
			pos = end;
		} else {
			pos++;
		}
	}

	// if 0 segments, we good, typeanything
	// if 1 segment, we good if boundaries align
	// if 2, output no

	int numSegments = segments.size();

	if (numSegments == 0) {
		std::cout << "yes" << std::endl;
		std::cout << "1 1" << std::endl;
		return 0;
	} else if (numSegments == 1) {
		// check boundaries
		int l = segments[0][0];
		int r = segments[0][1];

		bool l_b = true;
		bool r_b = true;

		if (l > 0) {
			l_b = (a[r] >= a[l-1]);
		}
		if (r < n-1) {
			r_b = (a[l] <= a[r+1]);
		}
		if (l_b && r_b) {
			std::cout << "yes" << std::endl;
			std::cout << l+1 << " " << r+1 << std::endl;
		} else {
			std::cout << "no" << std::endl;
		}
	} else {
		std::cout << "no" << std::endl;
	}

	return 0;
}