//difference of index of largest digit and smallest digit

#include<stdio.h>
int main () 
{
int num, remider=0,largest,i=0,p,z,q ,sh;
printf ("Enter the Number :");
scanf ("%d", &num);
int smallest=num%10; 
 largest=num%10; 
while (num > 0)
    {  
remider = num % 10;
if (smallest> remider)
 {
       smallest = remider;
       p=i;
 }
 if(largest <remider)
 {
 	largest = remider;
    q=i;
 }
num = num / 10;
i++;
    }
    z=q-p;
    if(z>0)
printf (":%d \n",z); 
else
printf (":%d \n",z*-1); 
return 0;
}
