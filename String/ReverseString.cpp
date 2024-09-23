#include<iostream>
using namespace std;

void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
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
    reverse(name,len);
    cout<<"Reversed name is ";
    cout<<name;
    return 0;
}