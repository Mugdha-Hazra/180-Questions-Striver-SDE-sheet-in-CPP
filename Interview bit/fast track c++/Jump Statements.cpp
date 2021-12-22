#include<iostream>

using namespace std;

int main()  {
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        if(i%2==0)
        continue;
        cout<<i<<"\n";
    }
    
    return 0;
}
