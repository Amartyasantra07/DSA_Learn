// enter a number and print it . is it prime or not 
#include<iostream>
using namespace std;
int main(){

int n,count=0;
cout<<"enter the number "<<endl;
cin>>n;
for (int i = 1; i <= n; i++)
{
  if (n%i==0)
  {
    count++;
  }
  
}
if (count==2)
{
    cout<<"prime number";
}
else
{
    cout<< "not a prime number";
}







    return 0;
}