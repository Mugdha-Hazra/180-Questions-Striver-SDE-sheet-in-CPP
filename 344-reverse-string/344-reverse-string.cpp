class Solution {
public:
    void reverseString(vector<char>& s) {
        int i;
        int n=s.size();
        for(int i=0;i<s.size()/2;i++)
        {
            swap(s[i],s[n-1-i]);
        }
        
    }
};