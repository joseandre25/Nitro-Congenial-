#include <iostream>
using namespace std;

int main() {
  int x;
  cin >> x;
  
  if (x < 0)
  {
    x = x * (-1);
  }
  
  cout << x << endl;
  return 0;
}