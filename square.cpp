     #include<iostream>
using namespace std;
int main(){
  int m;
  cout<<"enter a number:";
  cin>>m;
  
int n;
  cout<<"enter a number:";
  cin>>n;

for(int i=1;i<=m;i++){
  for(int j=1; j<=n;j++){
     if(i==1 || j==1){
     cout<<"*";}
     else  if(i==m || j==n){
     cout<<"*";}
     else{
        cout<<" ";
     }
  
} cout<<endl;
  }
 
}

 