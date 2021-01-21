#include<iostream>
using namespace std;
template <class T>
int funu(T a[],int n)
{
               T c,m;
               int i;
               for(i=0;i<n;i++)
               {
                              if(a[i]>c)
                              {c=a[i];
                              m=i;}
               }
               return m;
}
int main()
{
int a[100],n,i;
double b[100];
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
cin>>b[i];
}
cout<<funu<int>(a,n);
cout<<"\n";
cout<<funu<double>(b,n);
return 0;
}
/*  output:
3
1 2 3 
12.3 4.5 6.7 
sol:
2
0
*/
