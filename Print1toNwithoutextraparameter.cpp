   #include<iostream>
using namespace std;
void print(int n ){
    if(n==0) return;//base case
    //  cout<<n<<endl;//work
    print(n-1);//call         //palt diya to yhi kam pointer kro
    cout<<n<<endl;//work
     
}
int main(){
    int n;
    cout<<"enter n:" ;
    cin>>n;
    print(n);
}