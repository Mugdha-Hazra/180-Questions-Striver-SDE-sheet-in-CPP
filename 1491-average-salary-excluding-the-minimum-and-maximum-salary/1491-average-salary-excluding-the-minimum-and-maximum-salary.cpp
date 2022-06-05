class Solution {
public:
    double average(vector<int>& s) {
        double a=10000000,b=0,c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]<a)
                a=s[i];
             if(s[i]>b)
                b=s[i];
            c=c+s[i];
        }
        cout<<c<<a<<b;
        return double((c-a-b)/(s.size()-2));
    }
};