class Solution {
public:
    int reverse(int x) {
        long long int sum=0;
        while(x!=0)
        {
            int r=x%10;
            x=x/10;
            sum=(sum*10)+r;
        }
        if(sum<INT_MIN || sum>INT_MAX)
            return 0;
        return sum;
    }
};