/*
#include<iostream>
using namespace std;
*/

// Your code goes here
// Your code goes here

class Animal
{
public:
    Animal(int age){
        itsAge = age;
    }
    virtual void Eat(){
        cout << "Animal eats food"<<endl;
    }
    virtual int get_Age(){
        return itsAge;
    }
protected:
    int itsAge;
};

class Dog: public Animal{
public:
    Dog(int age=0) : Animal(age) {}
    void Eat(){
        cout << "Dog eats meat"<<endl;
    }
    int get_Age(){
        return itsAge;
    }
};

class Cat: public Animal{
public:
    Cat(int age=0): Animal(age){}
    void Eat(){
        cout << "Cat eats meat"<<endl;
    }
    int get_Age(){
        return itsAge;
    }
};

/*
int main()  {
   Animal *a;
   Dog dg(8); //making object of child class Dog
   Cat ct(3); //making object of child class Cat
   
   a = &dg;
   a->Eat();
   cout << "Dog's age is: "<<a->get_Age()<<endl;
   a= &ct;
   a->Eat();
   cout << "Cat's age is: "<<a->get_Age()<<endl;
   return 0;
}
*/
