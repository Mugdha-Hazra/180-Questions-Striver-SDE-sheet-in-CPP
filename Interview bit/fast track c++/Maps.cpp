#include<iostream>
#include<map>
using namespace std;

int main()  {
   int n;
   cin>>n;
   map<int,int>mp;
   while(n--)
   {
       int k;
       cin>>k;
       if(k==1)
       {
           int x,y;
           cin>>x>>y;
           mp[x]+=y;
       }
       else{
           int x;
           cin>>x;
           if(k==2)
           mp.erase(x);
           else
            cout<<mp[x]<<"\n";
        }
   }
    return 0;
}
