#include<iostream>
using namespace std;
class abc
{
	public:
int a;
void in()
{
cout<<"enter your choice 1-3"<<endl;
cin>>a;
try
{
if (a==1)
throw a;
else if (a==2)
throw 'A';
else if(a==3)
throw 3.5;
}
catch (int a)
{
cout<<" this is an integer exception"<<endl;
}

catch ( char ch)
{
cout<<" this is an character exception"<<endl;
}
catch (double d)
{
cout<<" this is an double exception"<<endl;
}
cout<<" end of the program"<<endl;
}
};
main()
{
	abc obj;
	obj.in();
}
