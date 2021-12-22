/*
#include <iostream>
using namespace std;
*/

// Your code goes here
template<class Type>
int index_of_largest(Type a[],int n)
{  int j;
    Type m=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>m)
        {
            m=a[i];
            j=i;
        }

    }
    return j;
}
