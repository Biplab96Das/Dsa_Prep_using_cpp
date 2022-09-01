#include<bits/stdc++.h>
using namespace std;
long long Factorial(int);
int main()
{
  int n;
  cout << "Enter the number :"<< endl;
  cin >> n;
  cout << Factorial(n) << endl;
}
long long Factorial(int n)
{  
   int Fact=1.0;
   for(int i=1;i<=n;i++)
   	 Fact*=i;
   	return Fact;
}