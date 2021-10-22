class Solution {
public:
   int divide(int dividend, int divisor)
    {
        if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        div_t divresult = div(dividend, divisor);
        return divresult.quot;
    }
};