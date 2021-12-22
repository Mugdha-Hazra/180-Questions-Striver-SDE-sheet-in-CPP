#include<iostream>
#include <iomanip> 
using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int a; 
long b;
char c;
float e;
double f;
cin>>a>>b>>c>>e>>f;
cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
cout<<std::fixed << std::setprecision(3)<<e<<"\n";
cout<<std::fixed << std::setprecision(9)<<f;
    return 0;
}
