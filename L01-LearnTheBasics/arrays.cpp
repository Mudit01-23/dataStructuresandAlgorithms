    #include <iostream>
    using namespace std;
    int main(){
        
    //int arr[5] = {1,2,3,4,5};
    // for(int i =0;i<sizeof(arr)/sizeof(arr[0]);i++){
    //     cout<< arr[i] << " ";
    // }
    //     return 0;


    int arr[3][3];
    arr[2][2] = 4;
    cout<<arr[2][2] << " ";
    cout<<arr[2][1] << " ";
    cout<<arr[2][0] << " ";
        return 0;
    }