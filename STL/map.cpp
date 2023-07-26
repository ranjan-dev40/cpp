#include <iostream>
#include <map>
using namespace std;
int main()
{
  map<int, string> a;

  a[1] = "ranjan";
  a[2] = "kajal";
  a[3] = "shipra";
  a[13] = "chhota bheem";

  cout << "before erase: " << endl;

  for (auto i : a)
  {
    cout << i.first << " " << i.second << endl;
  }

  cout << "found -13: " << a.count(-13) << endl;
  a.erase(13);
  cout << "after erase: " << endl;
  for (auto i : a)
  {
    cout << i.first << " " << i.second << endl;
  }

  auto it = a.find(2);
  for (auto i = it; i != a.end(); i++)
  {
    cout << (*i).first <<endl;
  }

  return 0;
}
