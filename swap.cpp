#include<iostream>
using namespace std;
void swap(int a, int b ){
// cout<<a<< " "<< b;
   int temp;
   temp=a;
   a=b;
   b=temp;
   cout<<a<< " "<< b;
}
 int main(){
    int x , y;
 cin>> x ;
 cin>> y ;
 swap(x,y);
 cout<<x << " "<< y<< endl;
//  return 0;
 
 }
 // when we use the pointer at swap function , the swap function can access the main function datatypes 
 // call by reference 