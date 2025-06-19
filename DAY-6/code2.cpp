// Write a function that swaps the values of two integer variables using references.
#include<iostream>
using namespace std;

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;    
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<"before swap"<<endl;
    cout<<x<<y<<endl;
    swap(&x ,&y);
    cout<<"after swap"<<endl;
    cout<<x<<y<<endl;
    return 0;
}