#include<iostream>
using namespace std;
int main(){
    int i=0,n;
    cin>>n;
    while(i<n){
        int j=0;
        while(j<=i){
            char ch='A'+i;
            cout<<ch<<" ";
            j+=1;
        }
        i+=1;
        cout<<endl;
    }   
}