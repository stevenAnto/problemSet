#include <iostream>
#include <vector>

using namespace std;

vector<long long> solve_queries(int n, int q, vector<long long>& sequence, vector<pair<int, int>>& queries) {
  // Calculate prefix sum array
  vector<long long> prefixSum(n + 1, 0);
  for (int i = 1; i <= n; ++i) {
    prefixSum[i] = prefixSum[i - 1] + sequence[i - 1];
  }

  // Process queries
  vector<long long> results;
  for (int i = 0; i < q; ++i) {
    int l = queries[i].first;
    int r = queries[i].second;
    long long result = prefixSum[r - 1] - prefixSum[l - 1];
    results.push_back(result);
  }

  return results;
}

int main() {
  int n, q;
  cin >> n >> q;

  vector<long long> sequence(n);
  for (int i = 0; i < n; ++i) {
    cin >> sequence[i];
  }

  vector<pair<int, int>> queries(q);
  for (int i = 0; i < q; ++i) {
    cin >> queries[i].first >> queries[i].second;
  }

  vector<long long> results = solve_queries(n, q, sequence, queries);

  for (long long result : results) {
    cout << result << endl;
  }

  return 0;
}
