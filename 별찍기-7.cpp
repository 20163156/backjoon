#include <iostream>

using namespace std;

int main()
{
  int num;
  cin >> num;

  for(int i = 0;i < num;++i)
  {
    for(int j = 0;j < num - i - 1;++j)
    {
        cout << " ";
    }
    for(int k = 0;k < 2 * i + 1;++k)
    {
        cout << "*";
    }
     cout << "\n";
  }

  for(int i = num;i < 2 * num -1;++i)
  {
    for(int j = 0;j <= i-num;++j)
    {
      cout << " ";
    }
    for(int k = 0;k < 2*((2*num-2)-i)+1;++k)
    {
      cout << "*";
    }


    cout << "\n";
  }

}
