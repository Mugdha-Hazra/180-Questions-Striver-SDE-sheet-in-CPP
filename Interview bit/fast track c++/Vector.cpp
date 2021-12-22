#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int n,k;
    vector<int >v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        v.push_back(k);
    }
    int g;
    cin>>g;
    //g=g-1;
    v.erase(v.begin()+g);
    sort(v.begin(),v.end());
   // v.erase(v.begin()+g);
    for(int i=0;i<n-1;i++)
    {cout<<v[i]<<"\n";}
    
    return 0;
}
