#include<bits/stdc++.h>
using namespace std;
float Cel_Fah(float n)
{
	return((n*9.0/5.0)+32.0);
}
int main()
{
  float n=32.0;
  cout << Cel_Fah(n);
  return 0;
}