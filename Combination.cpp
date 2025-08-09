  #include<iostream>
#include<cmath>
using namespace std;
  int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
      f *=i;
    }
    return f;
  }
int main(){
    int n;
   cout<<"Enter a n:";
   cin>>n;
    int r;
   cout<<"Enter a r:";
   cin>>r;                   //combination aise bhi nkalte hai but hm function  ka use krenge 
      int a =fact(n);
   int b =fact(r);
   int c =fact(n-r);
     cout<<a/(b*c);
    
}
 