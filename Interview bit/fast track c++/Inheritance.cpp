/*
#include <iostream>
using namespace std;

// Base class
class Shape {
   public:
      Shape(){length = 0; width = 0;} //default constructor
      void setlength(int l, int w) {length = l; width = w;}
  protected:
      int length, width;
};

// Derived class
class Square: public Shape {
   public:
      Square() : Shape() {} //declaring and initializing derived class constructor 
      int get_Area(){ return (length * width); }
};
*/

// Create class Rectangle

class Rectangle:public Shape{
   public:
   int get_Perimeter()
   {
      return 2*(length+width);
   }
};


/*
int main(void) {
   Square sq; //making object of child class Square
   sq.setlength(5, 5); //setting length equal to 5
   // Print the area of the object.
   cout << "Total area of square is: " << sq.get_Area() << endl;
   Rectangle rc;
   rc.setlength(10, 5);
   // Print the perimeter of the object.
   cout << "Total perimeter of rectangle is: " << rc.get_Perimeter() << endl;
   return 0;
}
*/
