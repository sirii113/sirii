#include<iostream>
using namespace std;
inline float mul(float a,float b)
{
    return a*b;
}
inline float div(double p,double q)
{
    return p/q;
    
};
int main()
{
    float x=5.4,y=2.6;
    cout<<"the result of multiplication"<<mul(x,y);
    double m=3.5,n=1.4;
    cout<<"the division"<<div(m,n);
}
