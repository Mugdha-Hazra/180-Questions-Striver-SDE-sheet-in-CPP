#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int main()
{
int max=0, x=0, secondhighestnum =0,n=0;
scanf("%d",&n);
while(n>0)
{
x=n%10;
 if(x>max)
{
 max =x;
}
if(x > secondhighestnum && x < max)
{
 secondhighestnum = x;
}
n= n/10;
}
printf("%d",secondhighestnum*max);
}
