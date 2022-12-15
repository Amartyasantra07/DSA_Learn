 #include<iostream>

 using namespace std;

void update(int arr[], int n){

    cout << endl << " inside the function "<< endl;

    // updating array's first position 
    arr[1]=25;

    // printing the arry 

    for (int  i = 0; i < n; i++)
    {
        cout << arr[i]<< " ";

    }cout << endl;
    

    cout << "going back to main function "<< endl;

}

 int main (){

    int arr[4]={1,2,3,5};
    update(arr,4);

    // printing the array 
    cout << endl << " printing in main function "<< endl;
     for (int  i = 0; i <4; i++)
    {
        cout << arr[i]<< " ";

    }cout << endl;
    

    return 0;
 }
