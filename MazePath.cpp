#include<iostream>
using namespace std;
int maze(int cr, int cc,int er,int ec){
     int rightways=0;
      int downways=0;
      if(cr==er && cc==ec) return 1;
  if(cr==er) { //only right call
    rightways +=maze(cr,cc+1,er,ec);
  }
  if(cc==ec){ // only down call
      downways =maze(cr+1,cc,er,ec);
  } 
  if(cr<er && cc<ec){
    rightways +=maze(cr,cc+1,er,ec);
    downways +=maze(cr+1,cc,er,ec);
  }
     
     int totalways=rightways +downways;
    return totalways;
}
int main(){
    int n;
    cout<<"Enter a number  of row of maze : ";
    cin>>n;
    int m;
    cout<<"Enter a number of  colums of the maze: ";
    cin>>m;
  cout<<maze(1,1,n,m);
}