//Write a program in C++ to calculate the series (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n).
#include<iostream>
using namespace std;

int main(){

for(int i=0;i<4;i++){

    for(int j=0;j<4;j++){
        int blank_space=4-i-1;
        if(j<blank_space){
            cout<<" ";
        }
        else{
            cout<<"*";
        }
    }
    cout<<endl;
}
    return 0;
}