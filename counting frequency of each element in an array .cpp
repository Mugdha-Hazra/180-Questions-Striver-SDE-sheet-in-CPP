#include <stdio.h>
int main()
{
int arr[10], FreqArr[10], i, j, Count, Size,a,b; 
printf ("\nEnter the size of the array: ");
scanf ("%d", &Size); 
for (i = 0; i < Size; i++)
{
printf("\nEnter the element-%d: ", i+1);
scanf ( "%d", &arr[i]); //input the elements 
FreqArr[i] = -1;
}
   for (i = 0; i < Size; i++) 
        {
 
            for (j = i + 1; j < Size; j++)
            {
 
                if (arr[i] > arr[j]) 
                {
 
                    b =  arr[i];
                    arr[i] = arr[j];
                    arr[j] = b;
 
                }
 
            }
 
        }
for(i=0;i<Size;i++)
{
Count = 1;
for(j= i + 1; j < Size; j++)
{
if(arr[i] == arr[j])
{
 Count++;
 FreqArr[j]=0;
}
}
if(FreqArr[i] != 0)
{
FreqArr[i] = Count;
}
}

printf("\noUTPUT :\n");
for (i = 0; i < Size; i++)

{

if(FreqArr[i] !=0)

{
printf("%d Occurs %d Times \n", arr[i], FreqArr[i]);
}
}
printf("%d",arr[1]);
return 0;
}
