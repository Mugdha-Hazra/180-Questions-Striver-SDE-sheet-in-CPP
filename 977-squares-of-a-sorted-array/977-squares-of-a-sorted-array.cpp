//Runtime: 35 ms, faster than 83.38% of C++ online submissions for Squares of a Sorted Array.
class Solution {
public:
    vector<int> sortedSquares(vector<int>& n) 
    {   int f=-1;
        for(int i=0;i<n.size();i++)
        n[i]=pow(n[i],2);
        stack<int>s;
        for(int i=0;i<n.size()-1;i++)
        {if(n[i]>=n[i+1])
            s.push(n[i]);
          else
            { f=i;
                break;}
        }
     vector<int>v;
        if(f!=-1)
        {
            while(s.size()&&f<n.size())
            {
                if(n[f]<s.top())
                    v.push_back(n[f++]);
                else
                { v.push_back(s.top());
                s.pop();
                }
            }
            while(s.size())
            {
                v.push_back(s.top());
                s.pop();
            }
            while(f<n.size())
                 v.push_back(n[f++]);
             return v;
        }
        reverse(n.begin(),n.end());
        return n; ;
    }
};