#include <iostream> 
using namespace std;




int main () {

 // Creating 2d array
 
 // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,14,16};
 //   int arr[3][4] =  {{1,11,111,1111},{2,22,222,2222} , {3,33,333,3333}};

int arr[3][4] ; 


 // taking input -> row wise input
 for(int row = 0; row<3 ; row++){
    for(int col = 0; col<4 ; col++){
        cin>>arr[row][col];
    }
 }


/*
// taking input -> column wise input
 for(int col = 0; col<4 ; col++){
    for(int row = 0; row<3 ; row++){
        cin>>arr[row][col];
    }
 }
*/


 // Print
 for(int row = 0 ; row<3 ; row++){
    for(int col = 0 ; col<4 ; col++){
        cout<<arr[row][col]<<" ";
    }
    cout<<endl;
 }

cout<<"Enter the element to search " << endl;
int target;
cin>> target;

if(isPresent(arr, target, 3, 4)){
  cout<<"Element found"<< endl;
}

else{
     cout<<"Not found " <<endl; 
}

return 0;

}
