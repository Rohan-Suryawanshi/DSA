// #include <bits/stdc++.h>
// using namespace std;
// int fib(int n, int dp[])
// {
//   if (n <= 1)
//   {
//     return n;
//   }
//   if (dp[n] != -1)
//   {
//     return dp[n];
//   }
//   return dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
// }
// int main()
// {
//   int n;
//   cout << "Enter the number :";
//   cin >> n;
//   int dp[n + 1];
//   memset(dp, -1, sizeof(dp));
//   cout << fib(n, dp);
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout << "Enter the number :";
  cin >> n;
  vector<int> dp(n + 1, -1);
  dp[0]=0;
  dp[1]=1;
  for(int i=2;i<=n;i++)
  {
    dp[i]=dp[i-1]+dp[i-2];
  }
  cout<<dp[n]<<endl;
}