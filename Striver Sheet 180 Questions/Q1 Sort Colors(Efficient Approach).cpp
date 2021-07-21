//Using Dutch National Flag Algorithm, Time Complexity: O(n) , Space Complexity: O(1)

/*
AIM:
---
The main aim of this algorithm is we will shift all the zeros to the extreme left and all the twos to the extreme right then we'll automatically get the ones in the middle.

Working:
--------
we'll initilise 3 pointer variable (int)
low =0
mid =0
high=size-1
now we'll trave through all the elements of the array till mid<=high
if the element is 0 then we'll swap the low with mid and increment both of them
else if element = 1 then we'll just increment mid
else if element =2 then we'll swap the mid with high and decrement the high.
*/
class Solution {
public:
    void sortColors(vector<int>& v) 
    { int low=0,mid=0,high=v.size()-1;
     while(mid<=high)
     {  if(v[mid]==0)
             swap(v[mid++],v[low++]);
         else if(v[mid]==1)
             mid++;
         else
             swap(v[mid],v[high--]);
     }
    }
};
