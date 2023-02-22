#include<iostream>
using namespace std;
void func(int val) throw(int , char)
{
if (val==0)
throw 'a';
if (val==1)
throw 10;
}
int main()
{cout<<" start of main"<<endl;
try
{
func(1);
}
catch (int)
{
cout<<" int exception"<<endl;
}
catch (char)
{
cout<<" char exception"<<endl;
}
}
