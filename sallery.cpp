#include<iostream>

using namespace std;
int main(){
 int s,pa,pd,ns;
 cout<<"enter the basic sallery:"<<endl;  
 cin>>s;
 cout<<"enter the percentage of allowences :"<<endl;  
 cin>>pa;
 cout<<"enter the percentage of deductions:"<<endl;  
cin>>pd;
ns=s+((s*pa/100)-(s*pd/100));
cout<<"the net sallary is :"<<ns<<endl;



    return 0;
}