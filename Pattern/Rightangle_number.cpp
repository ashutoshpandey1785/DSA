#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i;
            j+=1;
        }i+=1;
        cout<<endl;
    }
}