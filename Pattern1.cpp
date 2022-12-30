//1)Outer loop of any loop is for number of rows or no of lines.Which is 5
//*
//* *
//* * *
//* * * *
//* * * * *
//2)For every row how many columns are there.no.of column=line no. and column contain "* "
#include<iostream>
//here in the given pattern line no.=no. of stars=outer loop's counter no.
using namespace std;
int main()
{
    for(int i=1;i<=5;++i)//Line no.
       {for(int j=1;j<=i;++j)//No. of columns.
            cout<<"* ";//element of each row-column pair.
        cout<<endl;    
       }    
  return 0;  
}