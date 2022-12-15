#include<iostream>
#include<math.h>
//Write a program in C++ to find the sum of the series 1 + 1/2^2 + 1/3^3 + ..+ 1/n^n.
using namespace std;
int main(){
int n;
double sum=0,a;
cout<<"enter the number n"<<endl;
cin>>n;
for (int i = 1; i <=n; i++)
{
    a=1/pow(i,i);
    cout<<"1/"<<i<<"^"<<i<<"="<<a<<endl;
    sum+=a;
}
cout<<"sum of the siries is "<<sum<<endl;


    return 0;
}