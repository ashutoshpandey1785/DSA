#include<iostream>
using namespace std;


bool palindrome(char a[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(a[s]!=a[e]){
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}
int getlength(char name[]){
    int count =0;
    for (int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

//'\0' mean null character or it is treated as terminator for strings
int main(){
    char name[100];
    cout<<"Enter your name ";
    cin>>name;
    cout<<"Length: "<<getlength(name)<<endl;
    
    int len=getlength(name);
    cout<<"Enter name is Palindrome ? "<<palindrome(name,len);

    return 0;
}