#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cin>>n;
    while(i<=n){
        int j=1,val=i;
        while(j<=i){
            cout<<i+j-1;
            val+=1;
            j+=1;
        }
        i+=1;
        cout<<endl;
    }
}