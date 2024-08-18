#include<iostream>
using namespace std;
int main(){
    int n,i=1,c=0;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch='A'+c;
            cout<<ch;
            c+=1;
            j+=1;
        }
        i+=1;
        cout<<endl;
    }
}   