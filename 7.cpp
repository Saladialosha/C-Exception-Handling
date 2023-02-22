#include<iostream>
using namespace std;
main()
{
int a=1;
try
{
try
{
throw a;
}
catch(int x)
{
cout<<" exception is in inner block "<<endl;
throw x; 
}
}

catch(int n)
{
cout<<" exception is in outer "<<endl;
}

cout<<" endo ofn the program"<<endl;
}
