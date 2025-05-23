// Check if an Integer is Less than 10 and is Even

#include<iostream>

using namespace std;

int main(){

    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    if(a<10){
        if(a%2 == 0){
            cout<<"number is less than 10 and is even"<<endl;
        }
        else{
        cout<<"number is less 10  but not even"<<endl;
     }
    }
    else{
        cout<<"not less than 10 "<<endl;
    }
    return 0;
}