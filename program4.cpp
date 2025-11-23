#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
  vector<int> arr = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};

  map<int, int> countMap;

  for (int i = 1; i <= 9; i++)
  {
    int cnt = 0;
    for (int n : arr)
    {
      if (n % i == 0)
        cnt++;
    }
    countMap[i] = cnt;
  }

  for (auto item : countMap)
  {
    cout << item.first << ": " << item.second << endl;
  }

  return 0;
}
