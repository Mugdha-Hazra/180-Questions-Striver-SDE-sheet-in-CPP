class Solution {
public:
    vector<int> findDuplicates(vector<int>& n) {
        vector<int>v;
        for(int i=0;i<n.size();i++)
        {
             if(n[abs(n[i])-1]<0)
             {
                 v.push_back(abs(n[i]));
            }
            else{
                int p=n[i];
                n[abs(p)-1]=-1*n[abs(p)-1];
            }   
        }
        return v;
    }
};