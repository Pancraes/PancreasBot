#include <bits/stdc++.h>
using namespace std;

/*
Operations that need to be created:
- addition, subtraction, multiplication, division
- remainder(modulus), dmod(modulus but for double)
- factorial
- fast power (no decimals and no negative numbers), power (decimals and negative numbers)
- nth root (root)
- log, logn(?)
- sin, cos, tan, sec, csc, cot
- inverse sin, inverse cos, inverse tan
*/

int main()
{
  string formula;  
  double variable;
  vector<string> myvector;

  cout << "Enter your formula (MAKE SURE THERE IS A SPACE BETWEEN EVERYTHING): ";
  getline(cin, formula);
  istringstream cin(formula);

  while (cin >> formula)
  {
    myvector.push_back(formula);
  }

  for (int i = 0; i < myvector.size(); i++)
  {
    if (myvector[i] == "/" || myvector[i] == "*")
    {
      if (myvector[i] == "/")
      {
        variable = stold(myvector[i - 1]) / stold(myvector[i + 1]);
      }
      if (myvector[i] == "*")
      {
        variable = stold(myvector[i - 1]) * stold(myvector[i + 1]);
      }
      myvector[i - 1] = to_string(variable);
      for (int j = i; j < myvector.size() - 3; j++)
      {
        myvector[j] = myvector[j + 2];
      }
      myvector.resize(myvector.size() - 2);
    }
  }
  for (int i = 0; i < myvector.size(); i++)
  {
    if (myvector[i] == "-" || myvector[i] ==  "+")
    {
      if (myvector[i] == "-")
      {
        variable = stold(myvector[i - 1]) - stold(myvector[i + 1]);
      }
      if (myvector[i] == "+")
      {
        variable = stold(myvector[i - 1]) + stold(myvector[i + 1]);
      }
      myvector[i - 1] = to_string(variable);
      for (int j = i; j < myvector.size() - 3; j++)
      {
        myvector[j] = myvector[j + 2];
      }
      myvector.resize(myvector.size() - 2);
    }
  }
  cout << "\n" << myvector[0];
}