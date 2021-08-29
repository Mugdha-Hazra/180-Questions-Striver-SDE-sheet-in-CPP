/*

https://codeforces.com/problemset/problem/112/A
*/
#include <iostream>
#include <cstdio>
#include<string.h>
using namespace std;
int main() 
{char a[10000],b[10000],c,d;,./l
int i,j;
cin>>a;
cin>>b;
for(i=0;i<=strlen(a);i++) 
{ if(a[i]>=65 && a[i]<=92)
  {a[i]=a[i] + 32;}
}
for(i=0;i<=strlen(b);i++) 
{ if(b[i]>=65 && b[i]<=92)
  {b[i]=b[i] + 32;}
}
for(i=0,j=0;a[i]!='\0'&&b[j]!='\0';i++,j++)
{if(a[i]!=b[j]) break;}
if(a[i]==b[j])cout<<"0\n";
else if(a[i]<b[j])cout<<"-1\n";
else cout<<"1\n";
return 0;
}
