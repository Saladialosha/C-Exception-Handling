#include<iostream>
using namespace std;
class division
{
public:
int x,y,result;
void get()
{
cout<<"enter values"<<endl;
cin>>x>>y;
}
void show()
{
result=x/y;
cout<<"result is"<<result<<endl;
}
};
main()
{
division obj;
try
{
obj.get();
if(obj.y==0)
throw obj.y;
else
{
obj.show();
}
}
catch( int y )
{
cout<<"divide by zero not allowed"<<endl;
}
}
