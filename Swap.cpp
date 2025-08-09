#include<iostream>
using namespace std;
 int main(){
     int x=3;
     int y=5;
    //  int temp= x;
    //  x=y;
    //  y=temp;

    x=x+y;
    y=x-y;
    x=x-y;
     cout<<x<<" "<<y<<endl;
     
 }