 #include<iostream>
using namespace std;
int main(){
     
    int arr1[2][3]={{7,8,3},{3,6,5} };
    int arr2[2][3]={{1,5,3},{3,5,5} };
         int arr3[2][3];
     for(int i=0;i<2;i++){  //row
        for(int j=0;j<3;j++){  //row
             arr3[i][j] = arr1[i][j]+arr2[i][j];
        }
         }
       
      for(int i=0;i<2;i++){  //row
        for(int j=0;j<3;j++){  //row
              
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
    
 

}