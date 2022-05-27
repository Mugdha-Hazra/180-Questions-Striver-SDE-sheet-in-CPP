class Solution {
public:
    vector<int> decompressRLElist(vector<int>& n) {
        vector<int>a;
        for(int i=1;i<n.size();i=i+2)
        {
            int c=n[i-1],k=n[i];
            while(c>0)
            {
                a.push_back(k);
                c--;
            }
        }
        return a;
    }
};