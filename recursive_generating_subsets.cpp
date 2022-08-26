// Kas S
#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> subsets;
vector<int> subset; 

void search(int k) {
	if (k == n) {
		subsets.push_back(subset);
	} else {
		search(k + 1);
		subset.push_back(k);
		search(k + 1);
		subset.pop_back();
	}
}

signed main() {
	cin >> n;
	search(0);
	return 0;
}
