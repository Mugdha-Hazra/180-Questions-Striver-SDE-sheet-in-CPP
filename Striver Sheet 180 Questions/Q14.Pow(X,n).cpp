/*
My Approach
            > and the number it it gets the resultant
            > multiply it till it get 0 or 1.
*/
class Solution {
public:
    double myPow(double x, int n) {
        // base case
        // +ve power
        if(n == 0 || n == 1)
            return n == 0 ? 1 : x;
        // -ve power
        if(n == -1)
            return 1 / x;
        
        double power = myPow(x, n/2);
        // if power n is even
        if(n % 2 == 0)
            return power * power;
        // odd power
        else {
            return power * power * (n < 0 ? (1 / x) : x);
        }
    }
};
