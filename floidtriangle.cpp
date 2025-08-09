 #include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter a number:";
  cin>>n;
    // 12345
    //1234
    //123
    //12
    //1 asie print
//   for(int i=1;i<=n;i++){
//     int a=1;
//   for(int j=1; j<=n-i+1;j++){
//   cout<<a<<" ";
//   a++;
// }

// cout<<endl;

 int a=1;
for(int i=1;i<=n;i++){
   
  for(int j=1; j<= i;j++){
  cout<<a<<" ";
  a++;
}

cout<<endl;
}
}
 