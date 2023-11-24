#include <algorithm>
#include <bit>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int T;
	cin >> T;
	while (0 < (T--)) {
		string X;
		cin >> X;

		auto used = vi(10, 0);
		for (const auto& c : X) {
			used[c - '0'] = 1;
		}

		const auto ans = accumulate(used.begin(), used.end(), 0);
		cout << ans << '\n';
	}

	return 0;
}