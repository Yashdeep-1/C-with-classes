//  Write a function that takes an integer n and prints the multiplication table of n up to 10.
#include<iostream>
using namespace std;

void table(int x){
    cout<<"Table is :-"<<endl;
    for(int i=1; i<11; i++){
        cout<<i*x<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    table(n);
    return 0;
}