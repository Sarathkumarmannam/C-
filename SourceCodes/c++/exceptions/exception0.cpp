//Sample use of try,throw,catch
//throwing an exception from inside try block
#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"Enter an Integer"<<endl;
    cin>>i;
    try{
        if (i==1)
        {
        throw i;
        
        }
    }
       catch(int i)
    {
        cout<<"Error Found\t value ="<<i;  
    }
      cout<<"Value is Valid\t"<<i;
}