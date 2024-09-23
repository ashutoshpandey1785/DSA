#include<iostream>
using namespace std;

bool ispresent(int arr[][4],int target,int r,int c){
    for(int r=0;r<3;c++){
        for(int c=0;c<4;c++){
            if (arr[r][c]==target){
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[3][4];
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

    cout<<"enter element to search "<<endl;
    int target;
    cin>>target;
    if(ispresent(arr,target,3,4)){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"element not found";
    }


    return 0;
}