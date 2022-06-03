#include <bits/stdc++.h>
using namespace std;

int main()
{
     
     int t, a, b , c ;
     cin>>t;
     
     while(t--)
     {
         cin>>a>>b>>c;
         
        
        if( (a+b)>(b+c) && (a+b)>(a+c) )
        {
            cout<<a+b<<endl;
        }
        else if ((b+c)>(a+b) && (b+c)>(a+c))
        {
            cout<<b+c<<endl;
        }
        else if ((a+c)>(b+c) && (a+c)>(a+b) )
        {
           cout<<a+c<<endl; 
        }
        
         
     }
	return 0;
}

