#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int N, m, M, T, R;
	cin >> N >> m >> M >> T >> R;

	if (M < m + T) {
		cout << -1;
		return 0;
	}

	auto x = int{ m };
	auto ct = int{ 0 };
	auto n = int{ 0 };
	while (n < N) {
		if (x + T <= M) {
			x += T;
			++n;
		}
		else {
			x -= R;
			if (x < m) {
				x = m;
			}
		}

		++ct;
	}

	cout << ct;

	return 0;
}