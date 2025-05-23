// Check if an Integer Lies in the Range

#include<iostream>

using namespace std;

int main(){

    //let's take range from -3 to +3

    int a;
    cout<<"Enter the number"<<endl;
    cin>>a;

    if(a> -3 && a< +3){
        cout<<"Number is in the range"<<endl;
    }
    else{
        cout<<"Number is not in the range"<<endl;
    }
    return 0;
}