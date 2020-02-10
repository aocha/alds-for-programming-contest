#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
  int n;
  cin >> n;

  int i, r[n];
  for (i = 0; i < n; i++)
  {
    cin >> r[i];
  }

  int minv = r[0];
  int maxv = -1000000000;

  for (i = 1; i < n; i++)
  {
    maxv = max(maxv, r[i] - minv);
    minv = min(minv, r[i]);
  }

  cout << maxv << endl;

  return 0;
}
