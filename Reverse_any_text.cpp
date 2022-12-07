#include<bits/stdc++.h>
using namespace std;
void rev(string &s)
{
   for(int i=0;i<s.length()/2;++i)
     swap(s[i],s[s.length()-i-1]);    
}
int main()
{   string s;
    cout<<"Enter the text to to reversed"<<endl;
    getline(cin,s);
    rev(s);
    cout<<s<<endl;
    return 0;
}    