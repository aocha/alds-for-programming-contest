#include <iostream>
using namespace std;

struct Card
{
  char suit, value;
};

void printCards(Card c[], int n)
{
  for (int i = 0; i < n; i++)
  {
    if (i)
      cout << " ";
    cout << c[i].suit << c[i].value;
  }
  cout << endl;
}

void bubbleSort(Card c[], int n)
{
  bool flag = 1;
  for (int i = 0; flag; i++)
  {
    flag = 0;
    for (int j = n - 1; j >= i; j--)
    {
      if (c[j].value < c[j - 1].value)
      {
        swap(c[j], c[j - 1]);
        flag = 1;
      }
    }
  }
}

void selectionSort(Card c[], int n)
{
  int minj = 0;
  for (int i = 0; i < n; i++)
  {
    minj = i;
    for (int j = i + 1; j < n; j++)
    {
      if (c[minj].value > c[j].value)
        minj = j;
    }
    if (i != minj)
      swap(c[i], c[minj]);
  }
}

bool isStable(Card c1[], Card c2[], int n)
{
  bool flag = 1;
  for (int i = 0; i < n; i++)
  {
    if (c1[i].suit != c2[i].suit)
    {
      flag = 0;
      break;
    }
  }
  return flag;
}

int main(void)
{
  Card C1[36], C2[36];
  int N;
  cin >> N;

  for (int i = 0; i < N; i++)
  {
    cin >> C1[i].suit >> C1[i].value;
    C2[i] = C1[i];
  }

  bubbleSort(C1, N);
  printCards(C1, N);
  cout << "Stable" << endl;
  selectionSort(C2, N);
  printCards(C2, N);
  if (isStable(C1, C2, N))
  {
    cout << "Stable" << endl;
  }
  else
  {
    cout << "Not stable" << endl;
  }

  return 0;
}
