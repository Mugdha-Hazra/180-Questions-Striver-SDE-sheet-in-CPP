#include<iostream>
#include<set>
#include<iterator>
using namespace std;

int main()  {
   int n;
   set<int>s;
   cin>>n;
   while(n--)
   {
       int x,y;
       cin>>y>>x;
       if(y==1)
       {
          s.insert(x);
       }
       else if(y==2)
       {
           s.erase(x);
       }
       else{
           auto itr=s.find(x);
          (itr==s.end()?cout<<"No\n":cout<<"Yes\n");
       }
   }
   if(s.size()>0)
   for(auto it=s.begin();it!=s.end();it++)
   cout<<*it<<"\n";
    return 0;
}
