#include<iostream>
using namespace std;
int maze(int n,int m){
     int rightways =0;
    int downways=0;
    if(n==1&& m==1) return 1;
    if(n==1) {//canoot go down
     rightways +=maze(n,m-1);}
     if(m==1){
          downways +=(n-1,m);
     }
    if(n>1 && m>1){
        rightways +=maze(n,m-1);
    downways +=(n-1,m);}
    
   int totalways =rightways +downways;
   return totalways; 
}
int main(){
    int n;
    cout<<"Enter a number  of row of maze : ";
    cin>>n;
    int m;
    cout<<"Enter a number of  colums of the maze: ";
    cin>>m;
  cout<<maze(n,m);
}