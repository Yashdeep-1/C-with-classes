// Create a structure to represent a student. It should have the following members:
// name (string)
// age (int)
// grade (char)

#include<iostream>
using namespace std;

struct student
{
    /* data */
    string name;
    int age;
    char grade;
};


int main(){
    student stud1;
    stud1.name = "Yashdeep";
    stud1.age = 18;
    stud1.grade = 'p';

    cout<<stud1.name<<" "<<stud1.age<<" "<<stud1.grade<<" "<<endl;
    return 0;
}