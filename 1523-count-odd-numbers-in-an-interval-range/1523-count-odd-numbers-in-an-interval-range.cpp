class Solution {
public:
    int countOdds(int l, int h) {
        if(l%2==0&&h%2==0)
        return (h-l)/2;
        return 1+(h-l)/2;
        
    }
};

// 4 5 6 7 8 9