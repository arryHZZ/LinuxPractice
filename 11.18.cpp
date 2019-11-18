#include<iostream>
using namespace std;

int pathNum(int n, int m)
{
  if(n > 1 && m > 1)
    return pathNum(n-1,m)+pathNum(n,m-1);
  else if (((n >= 1)&&(m == 1))||((n == 1)&&(m >= 1)))
    return m + n;
  else 
    return 0;
}

int main()
{
  int n,m;
  cin >> n >> m;
  cout << pathNum(n,m)<<endl;
  return 0;
}
