#include<bits/stdc++.h>
using namespace std;



int largestrow(int arr[][4],int r,int c){
    int maxi=INT_MIN;
    int rowind=-1;
    for(int r=0;r<3;r++){
        int sum=0;
        for(int c=0;c<4;c++){
            sum+=arr[r][c];
        }
        if(sum>maxi){
            maxi=sum;
            rowind=r;
        }
    }
    cout<<"Maximum sum of row is: "<<maxi<<endl;
    cout<< "row is at index: "<<rowind;
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
    largestrow(arr,3,4);

    return 0;
}