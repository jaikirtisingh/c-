 #include<iostream>
using namespace std;
int main(){
    int cp;
     cout<<"enter cost price:";
     cin>>cp;
      int sp;
     cout<<"enter selling price:"<<sp-cp;
     cin>>sp;
   if(sp>cp)
   {
    cout<<"profit";}
    else if(sp<cp){
        cout<<"loss"<<cp-sp;
    }
    else{
        cout<<"no profit no loss";
    }
    
}