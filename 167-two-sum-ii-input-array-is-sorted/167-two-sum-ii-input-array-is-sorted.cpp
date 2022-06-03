class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        int i=0,j=n.size()-1;
        vector<int>v;
        while(i<j)
        {  if(n[i]+n[j]==t)
            {v.push_back(i+1);
             v.push_back(j+1);
            return v;
            }
            else if(n[i]+n[j]>t)
                j=j-1;
            else
                i=i+1;
                
        }
        v.push_back(-1);
        return v;
    }
};