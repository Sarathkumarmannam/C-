#include<iostream>
using namespace std;
template <class t> void swapargs(t& a,t& b)
{
    t temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
int i,j;
char a,b;
double x,y;
i=5,j=10;
a='p',b='q';
x=12.2,y=13.6;
cout<<i<<"\t"<<j<<endl;
cout<<a<<"\t"<<b<<endl;
cout<<x<<"\t"<<y<<endl;
swapargs(i,j);
swapargs(a,b);
swapargs(x,y);
cout<<"After Swaping...\n";
cout<<i<<"\t"<<j<<endl;
cout<<a<<"\t"<<b<<endl;
cout<<x<<"\t"<<y<<endl;
return 0;
}