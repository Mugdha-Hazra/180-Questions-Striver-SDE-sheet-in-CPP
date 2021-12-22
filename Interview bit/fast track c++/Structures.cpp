/*
#include<iostream>
#include<string>
using namespace std;
*/
struct student{
    string name;
    int rollno;
    int marks;
};

// Create Structure named 'student'

int main()  {
    // Your code goes here
    student s1;
    s1.name="Robin";
    s1.rollno=11;
    s1.marks=86;
    
    // Don't change the below code
    cout<<s1.name<<endl;
    cout<<s1.rollno<<endl;
    cout<<s1.marks<<endl;
    return 0;
}
