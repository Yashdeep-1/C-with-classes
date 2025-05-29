// Print a Square Pattern using Nested Loops
#include<iostream>
using namespace std;

int main(){

    for(int i = 0;i<5;i++){// here for i=0 the loop starts and goes to j=0 to j=5 then restarts from i=1 and repeat
        for(int j = 0;j<5;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
