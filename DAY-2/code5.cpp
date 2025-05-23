// Check the Greatest Among Three Numbers

#include<iostream>

using namespace std;

int main(){

    int a,b,c;
    cout<<"Enter the three numbers"<<endl;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<"A is greatest"<<endl;
        }
        else{
            cout<<"C is greatest"<<endl;
        }
    }
    else if(b>a){
        if(b>c){
            cout<<"B is greatest"<<endl;
        }
        else{
            cout<<"C is greatest"<<endl;
        }
    }
    else if(c>a){
        if(c>b){
            cout<<"C is greatest"<<endl;
        }
        else{
            cout<<"B is greatest"<<endl;
        }
    }
    else{
        cout<<"all the number is equal"<<endl;
    }
    return 0;
}