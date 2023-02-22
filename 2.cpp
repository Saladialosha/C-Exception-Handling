#include<iostream>
using namespace std;
class abc
{
public:
void get()
{
int n1, n2, result;
cout<<" enter numbers"<<endl;
cin>>n1>>n2;
try
{

if (n2==0)
throw n2;
else
{

result=n1/n2;
cout<<" result is "<<result;
}
}

catch ( int x )
{
cout<<" divide by zero is not allowed "<<endl;
}
}
};
main()
{
	abc obj;
	obj.get();
}
