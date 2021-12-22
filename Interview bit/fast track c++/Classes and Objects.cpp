/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
*/

class Student{
    string name;
    int age;
    int rollno;
public:
    // Create funtions here with the name given
    void set_variable(string n,int a,int r)
    {
        this->name=n;
        this->age=a;
        this->rollno=r;
    }
    void print_variable()
    {
        cout<<name<<"\n"<<age<<"\n"<<rollno<<"\n";
         
    }
};



/*
int main()  {
    Student obj1;
    obj1.set_variable("Robin", 15, 10);
    Student obj2;
    obj2.set_variable("Rahul", 20, 14);
    obj1.print_variable();
    obj2.print_variable();
    return 0;
}
*/
