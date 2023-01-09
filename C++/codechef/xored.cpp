#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int ntc;
	cin >> ntc;
	vector<bool> used(505050);
	while (ntc--) {
		int n, x;
		cin >> n >> x;
		if (x == 1 && n % 2 == 0) {
			if (n % 4 == 2) {
				for (int i = 0; i < n; i++) {
					cout << i << " ";
				}
				cout << "\n";
				continue;
			}
			cout << 1 << " ";
			for (int i = 1; i < n; i++) {
				cout << i * 2 << " ";
			}
			cout << "\n";
			continue;
		}
		vector<int> res;
		res.push_back(x);
		int cur = 0;
		n--;
		if (n & 1) {
			cur++;
		}
		while (n > 0) {
			if (cur == x) {
				cur++;
				continue;
			}
			if (cur % 2 == 0 && (cur + 1) == x) {
				cur++;
				continue;
			}
			if (cur % 2 == 1 && (cur - 1) == x) {
				cur++;
				continue;
			}
			res.push_back(cur);
			cur++;
			n--;
		}
		int y = 0;
		for (int v: res) {
			y ^= v;
		}
		if (y != x) {
			if (res.size() > 1 && res[1] == 1) {
				res[1] ^= 1;
			} else {
				res[0] ^= (y ^ x);
			}
		}
		if (res[0] == 500001) {
			res[0] ^= (1 << 18);
			res[1] ^= (1 << 18);
		}
		for (int v: res) {
			cout << v << " ";
		}
		cout << "\n";
	}
	return 0;
} 
