/*
#include<iostream>
#include<string>
using namespace std;
*/

int main()  {
    string A, B;
    cin>>A>>B;
    cout<<A.size()<<" "<<B.size()<<"\n";
    cout<<A+B<<"\n";
    char t=A[0];
    A[0]=B[0];
    B[0]=t;
    cout<<A<<" "<<B;

    return 0;
}
