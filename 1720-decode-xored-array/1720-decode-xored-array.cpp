class Solution {
public:
    vector<int> decode(vector<int>& a, int f) {
        a.insert(a.begin(),f);
        for(int i=0;i<a.size()-1;i++)
         a[i+1]=a[i+1] xor a[i];
        return a;
    }
};