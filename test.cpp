#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  int a = 3,size=10;
  int b[size];
  for (int i = 0; i < size; i++)
  {
    b[i] = a*i+10;
    cout<<b[i]<<" | ";
  }
  return 0;
}