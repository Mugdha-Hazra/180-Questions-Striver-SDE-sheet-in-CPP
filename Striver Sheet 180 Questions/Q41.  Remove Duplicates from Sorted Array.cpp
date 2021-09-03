class Solution {
public:
    int removeDuplicates(vector<int>& n) 
    {
        if(n.size()==0)
            return 0;
        int i=0,j=1;
        while(j<n.size())
        {
            if(n[i]==n[j])
                j++;
            else
            { i++;
                n[i]=n[j];
             j++;
            }
        }
        return i+1;
    }
};

/* best approach
class Solution(object):
    def removeDuplicates(self, n):
        i=0
        while(i<len(n)-1):
            if(n[i]==n[i+1]):
                del n[i]
            else:
                i+=1
        return len(n)
        
class Solution {
public:
    int removeDuplicates(vector<int>& n) 
    {
        int i=0;
        while(i<n-1){
            if(n[i]==n[i+1])
                n.erase(i);
            else
                i++;
        }
        
    }
};
*/
