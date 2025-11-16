#include<iostream>
using namespace std;
int main()
{
    int rows,cols;
    int matrix[10][10],transpose[10][10];
    cout<<"enter rows and columns of the matrix:";
    cin>>rows>>cols;
    cout<<"enter elements of the matrix";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<"enter elements of a"<<i+1<<j+1;
            cin>>matrix[i][j];
        }
    }
    cout<<"entered matrix";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<matrix[i][j]<<" ";
        }
    }
    for( int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            transpose[j][i]=matrix[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<transpose[i][j]<<"";
        }
    }    
    
    
    }
