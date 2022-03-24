class Solution {
public:
    int digSum(int n)
    {
        int s = 0;
        while(n)
        {
            s+=n%10;
            n/=10;
        }
        return s;
    }
    int countLargestGroup(int n) {
        vector<int> v(37,0);
        for(auto i = 1; i<=n; i++)
            v[digSum(i)]++;
        int c = 0;
        auto m = *max_element(v.begin(),v.end());
        for(auto i : v)
        {
            if(i==m)
                c++;
        }
        return c;
    }
};