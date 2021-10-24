class Solution {
public:
    void moveZeroes(vector<int>& a) 
    {
       int i=0,j=0;
        while(j<a.size())
        {
            if(a[j]!=0)
            {
                a[i++]=a[j++];
            }
            else
            j++;
        }
        for(;i<a.size();i++)
        {
            a[i]=0;
        }
        
    }
};