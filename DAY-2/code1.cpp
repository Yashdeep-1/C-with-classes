// Even number can checked for its eveness by checking its remainder after division with 2.

#include<iostream>

using namespace std;

int main(){
    int a;
    cout<<"enter a number"<<endl;
    cin>>a;
    if(a%2 == 0){
        cout<<"number is even"<<endl;
    }else{
        cout<<"number is odd"<<endl;
    }
    return 0;
}