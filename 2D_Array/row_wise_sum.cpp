#include<iostream>
using namespace std;

int rowsum(int arr[][4],int r,int c){
    for(int r=0;r<3;r++){
        int sum=0;
        for(int c=0;c<4;c++){
            sum+=arr[r][c];
        }
        cout<<sum<<' ';
    }
    cout<<" is Sum of row";
    
}
int main()
{
    int arr[3][4];
    cout<<"enter elements of matrix"<<endl;
    //input 2d array
    for (int i = 0; i < 3; i++){
        for (int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }
    //printing 2d array
    for (int i = 0; i < 3; i++){
        for (int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    rowsum(arr,3,4);

    return 0;
}