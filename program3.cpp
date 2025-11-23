#include <iostream>
using namespace std;

int main()
{
  int a;
  cin >> a;

  int count = (a % 2 == 0) ? a - 1 : a;

  for (int i = 1, printed = 0; printed < count; i += 2, printed++)
  {
    cout << i;
    if (printed < count - 1)
      cout << ", ";
  }

  return 0;
}
