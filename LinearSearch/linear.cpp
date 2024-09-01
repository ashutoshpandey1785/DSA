#include<bits/stdc++.h>
using namespace std;

bool search(int nums[],int n,int key){
    for(int i=0;i<n;i++){
        if(nums[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[100],size,key;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element You want to search"<<endl;
    cin>>key;
    bool found=search(arr,size,key);
    if(found){
        cout<<"Key Present"<<endl;
    }
    else{
        cout<<"Key Not Present"<<endl;
    }
}