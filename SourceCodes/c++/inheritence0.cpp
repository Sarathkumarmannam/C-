#include<iostream>
using namespace std;
class base
{
    public:
    int i;
};
class derived: public base
{
public:
int j;
void sum()
{
    cout<<i+j<<"\t is the sum\n";
}
};
int main()
{
derived ob;
ob.i=5,ob.j=5;
ob.sum();
return 0;
};