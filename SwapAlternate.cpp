#include<bits/stdc++.h>
using namespace std;

void swapalternate(int arr[],int n){
    for (int i=0;i<n;i+=2){
        if (i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
 int arr[100],size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    swapalternate(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    

}