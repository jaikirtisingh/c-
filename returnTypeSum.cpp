 #include<iostream>
using namespace std;
int sum(int a ,int b){
    return a+b;
}
int main(){
   int a; 
   cout<<"Enter a number:";
   cin>>a;
   int b; 
   cout<<"Enter a number:";
   cin>>b;
    cout<< sum(a,b);
}