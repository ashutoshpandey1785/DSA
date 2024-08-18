#include<iostream>
using namespace std;
int main(){
    int i=1,n,c=0;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch='A'+c;
            cout<<ch;
            j+=1;
            c+=1;
        }
        i+=1;
        cout<<endl;
    }
}