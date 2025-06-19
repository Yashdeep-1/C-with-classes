// Write a function that takes two integers as parameters and returns their sum.
#include<iostream>
using namespace std;

void sum(int x,int y){
    cout<<"sum of two numbers is :"<<x+y<<endl;
}
int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;
    sum(a,b);
    return 0;
}