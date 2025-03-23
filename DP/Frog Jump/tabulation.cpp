#include <bits/stdc++.h>
using namespace std;

int frogJump(int n, vector<int> &heights)
{
  vector<int> dp(n + 1, 0);
  dp[0] = 0;
  int left, right = INT_MAX;
  for (int i = 1; i < n; i++)
  {
    left = dp[i - 1] + abs(heights[i] - heights[i - 1]);
    if (i > 1)
    {
      right = dp[i - 2] + abs(heights[i] - heights[i - 2]);
    }
    dp[i] = min(left, right);
  }
  return dp[n - 1];
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> heights(n);
    for (int i = 0; i < n; i++)
    {
      cin >> heights[i];
    }
    cout << frogJump(n, heights) << endl;
  }
  return 0;
}
// 4
// 4
// 10 20 30 10  ==>20
// 3
// 10 50 10 ==>40
// 8
// 7 4 4 2 6 6 3 4 ==>9
// 6
// 4 8 3 10 4 4  ==>6
