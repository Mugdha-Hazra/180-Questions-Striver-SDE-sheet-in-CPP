class Solution {
public:
    int removeDuplicates(vector<int>& a)
    {   if(a.size()==0)
        return 0;
        int i=0,j=1;
        while(j<a.size())
        {
            if(a[j]==a[j-1])
            {j++;}
            else{
                i++;
                a[i]=a[j];
                j++;
            }
        }
     return i+1;
        
    }
};