class Solution {
public:
    void moveZeroes(vector<int>& a)
    {
        int i=0,j=0;
       while(j<a.size())
        {
            if(a[j]==0)
                j++;
            else 
            {
             swap(a[i++],a[j++]); 
            }
        }
        
    }
};