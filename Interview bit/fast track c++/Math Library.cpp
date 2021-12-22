#include<iostream>
#include<cmath>
using namespace std;

int main()  {
    float a = 12.56, b = 5.12;
    // Print the sum of cube of both A and B, and store it in float variable named "cube_val"
    float cube_val=pow(a,3)+pow(b,3);
    cout<<cube_val<<"\n";
    // Print the square root of cube_val, and store it in float variable named "sq_val"
    float sq_val=sqrt(cube_val);
    cout<<sq_val<<"\n";
    // Print the sin of sq_val
    cout<<sin(sq_val);
    return 0;
}
