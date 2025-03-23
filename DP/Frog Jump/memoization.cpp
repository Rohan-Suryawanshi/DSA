#include <bits/stdc++.h>
using namespace std;

int solve(int i, vector<int> &heights, vector<int> &dp)
{
  if (i == 0)
    return 0;

  if (dp[i] != -1)
    return dp[i];

  int left = solve(i - 1, heights, dp) + abs(heights[i] - heights[i - 1]);
  int right = INT_MAX;
  if (i > 1)
  {
    right = solve(i - 2, heights, dp) + abs(heights[i] - heights[i - 2]);
  }

  return dp[i] = min(left, right);
}

int frogJump(int n, vector<int> &heights)
{
  vector<int> dp(n + 1, -1);
  return solve(n - 1, heights, dp);
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
