#include<iostream>
using namespace std;
int main(){
    int n,i=1,c=1;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=i){
        cout<<c;
        c+=1;
        j+=1;
        }i+=1;
        cout<<endl;
    }

}