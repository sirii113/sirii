#include<iostream>
using namespace std;
class Test
{
    int count=0;
    public:
    Test()
    {
        count++;
        cout<<"object created"<<count;
    }
    ~Test()
    { 
        cout<<"object destroyed"<<count;
        count--;
    }
};
int main()
{
    cout<<"\n entered into main";
    Test t1,t2,t3;
{
    cout<<"\n enter into block1";
    Test t4;
}
{
    cout<<"\n enter into block2";
    Test t5;
}
cout<<"\n entered into main";
}
