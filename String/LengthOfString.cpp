#include<iostream>
using namespace std;

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
    return 0;
}