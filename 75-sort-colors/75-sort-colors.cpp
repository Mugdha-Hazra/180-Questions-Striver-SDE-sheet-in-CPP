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