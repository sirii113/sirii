#include<iostream>
using namespace std;
int main()
{
    int array[3],i,n,index;
    cout<<"enter 3 numbers of the array";
    for(i=0;i<3;i++){
        cin>>array[i];
    }
    cout<<"enter number to be search";
    cin>>n;
    for(i=0;i<3;i++){
        if(array[i]==n){
            index=i;
            break;
        }
    }
    cout<<"element is  found"<<index<<" ";
    return 0;
}
