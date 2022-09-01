#include<bits/stdc++.h>
using namespace std;
long long Fact(int);
int main()
{
  int n,fact_val,count=0;
  cout << "Enter the number :";
  cin >> n;
  cout<<n<<endl;
  fact_val=Fact(n);
  while(fact_val !=0)
  {
  	fact_val=fact_val/10;
  	++count;
  }
  cout<<"The number of digit in the factorial is="<<count;
}
long long Fact(int n)
{  
   int Fact=1.0;
   for(int i=1;i<=n;i++){
   	 Fact*=i;
   }
   	return Fact;
}