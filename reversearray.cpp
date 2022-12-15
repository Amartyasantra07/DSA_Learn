#include<iostream>
using namespace std; 
// print an array in reverse alternate form 
void reverse(int arr[] , int n){
    int start=0;
    int next = start+1;
    for (int  i = 0; i < n; i++)
    {
        swap(arr[start],arr[next]);
        start=start+2;
        next=next+2;
    }
    
}
void printarray(int arr[], int n){
    for (int  i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main (){
 int arr[6]={1,2,3,4,5,6};
 reverse(arr,6);
 printarray(arr,6);
    return 0 ; 
}