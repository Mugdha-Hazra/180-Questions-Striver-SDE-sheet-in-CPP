class Solution {
public:
    vector<int> productExceptSelf(vector<int>& n)
    {
        vector<int>v;
        int c=1;
        for(int i=0;i<n.size();i++)
        {
            c*=n[i];
            v.push_back(c);
        }
        // for(auto x:v)
        //     cout<<"*"<<x<<"\t";
        vector<int>k;
        int m=1;
        for(int i=n.size()-1;i>-1;i--)
        {
            m*=n[i];
            k.push_back(m);
        }
        reverse(k.begin(),k.end());
        // for(auto x:k)
        //     cout<<"*"<<x<<"\t";
         vector<int>g;
        int l=1;
        for(int i=0;i<n.size();i++)
        {
            if(i==0)
                g.push_back(k[1]);
            else if(i==n.size()-1)
                g.push_back(v[n.size()-2]);
            else
            {
                g.push_back(v[i-1]*k[i+1]);
            }
        }
        return g;
        
    }
};