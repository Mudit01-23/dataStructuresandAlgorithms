#include<iostream>
using namespace std;

// void makechange(int &a){
//     cout<<"Inside the makechange function \n";
//     cout<<a<<endl;
//     a+=1;
//     cout<<a<<endl;
// }


// int main(){
//     int a = 10;
//     makechange(a);
//     cout<<a<<endl;
//     return 0;

// }


int main(){
    int arr[] ={1,2,3};
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<< " ";
    }

    
}