// Calculating the Sum of Natural Numbers using while loop

#include<iostream>
using namespace std;

int main(){
    int i = 5;
    int sum = 0;
// in while loop when loop starts i is 5 then value decreases by 1 with each execution of loop
    while(i>0){
        sum += i;
        i--;
    }
// for sum it adds the value of i to sum and then store the value in sum like sum = 0+5 : sum = 5+4 and so on 
    cout<<sum;
    return 0;
}