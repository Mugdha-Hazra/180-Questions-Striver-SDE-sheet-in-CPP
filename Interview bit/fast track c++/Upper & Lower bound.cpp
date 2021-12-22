#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

int main()  {
   int n,k;
   cin>>n;
   vector<int>v;
   for(int i=0;i<n;i++)
   {   cin>>k;
       v.push_back(k);
   }
   cin>>k;
   while(k--)
   {
       int g,f=0;
       cin>>g;
       for(int i=0;i<n;i++)
       {
           if(g==v[i])
           {   f=1;  
               cout<<i<<"\n";
               break;
           }
           else if(v[i]>g)
           {   f=1;
               cout<<i<<"\n";
               break;
           }
           else
           continue;
       }
       if(f==0)
       cout<<n<<"\n";

   }
    return 0;
}
