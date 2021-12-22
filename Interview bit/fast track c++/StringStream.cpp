/*
#include<iostream>
#include<sstream>
using namespace std;
*/
int main()  {
    string A;
    cin>>A;
    stringstream ss(A);
    char ch;
    int a;
    while(ss>>a>>ch)
    cout<<a<<"\n";
    cout<<a;
    return 0;
}
