#include<iostream>
using namespace std;
int main (){
    //5 integers -> 6,2,8,5,0
    int arr[5]; //declaration 
    cout<<"Enter a number :";
    for(int i=0;i<=4;i++){
        cin>>arr[i];
    }
     for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr[0]=100; //update
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }
    
}