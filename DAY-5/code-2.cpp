#include <iostream>
#include <cstdio>
#include<cstring>
using namespace std;

int main() {
    // Complete the code.
    int x,y;
    cin>>x;
    cin>>y;
    string arr[]= {"one","two","three","four","five","six","seven","eight","nine"};
    for(int i=x; i<=y; i++){
        if(i<=9){
            cout<<arr[i-1]<<endl;
        }else{
            if(i%2==0){
                cout<<"even"<<endl;
            }
            else{
                cout<<"odd"<<endl;
            }
        }
    }
    return 0;
}
