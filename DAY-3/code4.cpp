// Print a Square Pattern using Nested Loops (while loop)

#include<iostream>
using namespace std;

int main(){
    int i = 5;
    while(i > 0){
        int j = 5;
// here j is declared inside the loop of i is because we have to reset the j to 5 before running 
// the i loop again so that value of j starts from 5 if we do not do this then value of j remains 
// 0 and prints empty lines .j becomes 0 by condition j-- every time j loop runs .
        while(j >0){
            cout<<"*";
            j--;
        }
        cout<<"\n";
        i--;
    }
    return 0;
}