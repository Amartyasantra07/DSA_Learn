#include<iostream>

using namespace std; 

int sum(int arr[] , int n){
    int p=0;

    for (int  i = 0; i < n ; i++)
    {
         p = p + arr[i];
    }
    return p;
}

int main (){
// print sum of all elements present in an array 
int arr[5]={1,2,3,4,5};
   sum(arr,5);
    cout << "sum of an array is :" <<sum(arr,5) <<endl;


    return 0 ;
}
