     #include<iostream>
using namespace std;
int main(){
  int m;
  cout<<"enter a number:";
  cin>>m;
for(int i=1;i<=m;i++){ //rows
    for(int j=1; j<=m-i;j++){ // spaces
 cout<<"_";}
  for(int j=1; j<=i;j++){ // star
 cout<<"* ";
      
     }
     cout<<endl;
    }

  }
 


 