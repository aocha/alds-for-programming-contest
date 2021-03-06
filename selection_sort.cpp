#include <iostream>
using namespace std;

int selectionSort(int A[], int N)
{
  int sw = 0;

  for (int i = 0; i < N; i++)
  {
    int minj = i;
    for (int j = i + 1; j < N; j++)
    {
      if (A[minj] > A[j])
        minj = j;
    }
    if (i != minj)
    {
      swap(A[i], A[minj]);
      sw++;
    }
  }

  return sw;
}

int main(void)
{
  int A[100], N, sw;
  cin >> N;
  for (int i = 0; i < N; i++)
    cin >> A[i];

  sw = selectionSort(A, N);

  for (int i = 0; i < N; i++)
  {
    if (i)
      cout << " ";
    cout << A[i];
  }
  cout << endl;
  cout << sw << endl;

  return 0;
}
