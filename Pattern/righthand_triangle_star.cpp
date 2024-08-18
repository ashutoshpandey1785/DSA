#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cin>>n;
    while(i<=n){
        //space
        int space=n-i;
        while(space){
            cout<<" ";
            space-=1;
        }
        // star
        int j=1;
        while(j<=i){
            cout<<"*";
            j+=1;
        }
        i+=1;
        cout<<endl;
    }       
}