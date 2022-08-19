//Kas S
#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> subsets;
  for (int mask = 0; mask < (1 << n); mask++) {
    vector<int> subset;
    for(int i = 0; i < n; i++) {
      if (mask & (1 << i)) subset.push_back(i);
    }
    subsets.push_back(subset);
  }
}
