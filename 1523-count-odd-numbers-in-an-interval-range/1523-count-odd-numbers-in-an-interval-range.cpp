class Solution {
public:
    int countOdds(int l, int h) {
       ((l%2==0&&h%2==0) ? h=(h-l)/2: h=1+(h-l)/2);
        return h;
        
    }
};

// 4 5 6 7 8 9