#include <iostream>

using namespace std;

int main()
{
  int a;

  cout << "なにか値を入力してね";
  cin >> a;

  cout << "その値を3で割ったあまりは" << a % 3 << "です。" << endl;

  return 0;
}