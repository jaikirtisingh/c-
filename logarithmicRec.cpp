#include<iostream>
#include<cmath>
using namespace std;
int   power(int a,int b){
    if(b==1) return a;
     if(b%2==0){ //even
        return power(a,b/2) * power(a,b/2);}
        else{
             return power(a,b/2) * power(a,b/2) *a;
        }
       

}
int main(){
    int a;
    cout<<"Enter base case:";
    cin>>a;
    int b;
    cout<<"Enter uper  case:";
    cin>>b;
    
    cout<<power(a,b);
}