#include<iostream>
using namespace std;
int main(){
    int arr[4][2]={{76,81},{13,76},{81,91},{88,90}};
     
    // for(int i=0;i<2;i++){ //row
    //     for(int j=0;j<3;j++){ //col
    //         cout<<arr[i][j]<<" ";
    //     }


     //uper vale ka transpose hai
      for(int j=0;j<2;j++){  //col
        for(int i=0;i<4;i++){  //row
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
