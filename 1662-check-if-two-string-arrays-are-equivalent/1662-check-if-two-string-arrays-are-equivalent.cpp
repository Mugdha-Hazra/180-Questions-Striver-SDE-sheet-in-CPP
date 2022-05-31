class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& x, vector<string>& y) 
    {
        string a,b;
        for(int i=0;i<x.size();i++)
            a+=x[i];
        for(int i=0;i<y.size();i++)
            b+=y[i];
        if(a==b)
            return true;
        return false;
    }
};