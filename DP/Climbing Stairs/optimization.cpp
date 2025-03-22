#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout << "Enter the number :";
  cin >> n;
  int prev2 = 1;
  int prev = 1;

  for (int i = 2; i <= n; i++)
  {
    int current = prev + prev2;
    prev2 = prev;
    prev = current;
  }
  cout << prev;
}