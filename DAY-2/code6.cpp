// Simple Calculator using switch

#include<iostream>

using namespace std;

int main(){

    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a;
    cin>>b;
    int x;
    cout<<"Enter the case:"<<endl;
    cin>>x;
    switch (x)
    {
    case 1:
        cout<<a+b<<endl;
        break;

    case 2:
        cout<<a-b<<endl;
        break;

    case 3:
        cout<<a*b<<endl;
        break;

    case 4:
        cout<<a/b<<endl;
        break;

    case 5:
        cout<<a%b<<endl;
        break;
    
    default:
       cout<<"Invalid entry"<<endl;
        break;
    }
    return 0;
}