 #include<iostream>
using namespace std;
void  print(int x, int n){
      if(x>n) return; //base case
    cout<<x<<endl; //call
    print(x+1,n);//work
   
}
int main(){
    int n;
    cout<<"enter n:" ;
    cin>>n;
    print(1,n);
}