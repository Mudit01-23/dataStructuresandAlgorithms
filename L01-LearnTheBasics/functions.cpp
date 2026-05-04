#include<iostream>
using namespace std;

int add(int a,int b,char operation){
    if(operation == '+'){
        return a+b;
    }
    else if(operation == '-'){
        return a-b;
    }
    else if(operation == '*'){
        return a*b;
    }
    else if(operation == '/'){
        return a/b;
    }
    return 0;
}




int main(){
    int a = add(1,2,'+');
    cout<<a;
    return 0;

}

