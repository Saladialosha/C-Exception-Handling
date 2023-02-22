#include<iostream>
using namespace std;
main()
{
int a;
cin>>a;
try
{
if (a==1)
throw a;
else if (a==2)
throw 'A';
else if(a==3)
throw 4.5;
}
catch(...)
{
cout<<" you got an exception"<<endl;
}
cout<<" end of the program"<<endl;
}
