//* * * * *
//* * * * 
//* * * 
//* * 
//* 
#include<iostream>
using namespace std;
int main()
{
  for(int i=1;i<=5;++i){//no.of lines
      for(int j=6-i;j>=1;--j)//no.of columns
         cout<<"* ";//element of each position of row-column
    cout<<endl; }    
  return 0;     
}