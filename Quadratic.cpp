#include<bits/stdc++.h>
using namespace std;
void Quad(int a,int b,int c)
{
	
	if(a==0)
	{
		cout << "Invalid";
	}
	int d= (b*b-4*a*c);
	int sqr_root=sqrt(abs(d));
	if(d>0) //d>0---> two roots & different
	  {
	    cout <<"Two different roots are there"<<endl;
	    cout << "root1 :"<< (-b+sqr_root)/2*a<<"\n";
	    cout << "root2 :"<< (-b-sqr_root)/2*a<<endl;
	  }
	  else if(d==0)
	   {
	     cout<<"root1=root2="<<-b/2*a<<endl;
	   }
	  else if(d<0)
	   {
	     cout<<"roots are different imaginary:"<<endl;
	     cout<<"root1 :"<<-b/(2*a) <<"+i"<< sqr_root/(2*a)<<endl;
	     cout<<"root2 :"<<-b/(2*a) <<"-i"<< sqr_root/(2*a)<<endl;
	   } 
}
int main()
{
	int a,b,c;
	a=1,b=-7,c=12;
	Quad(a,b,c);
	return 0;
}