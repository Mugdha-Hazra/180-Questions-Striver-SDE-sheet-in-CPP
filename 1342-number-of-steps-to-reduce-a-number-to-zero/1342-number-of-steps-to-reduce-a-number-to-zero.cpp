class Solution {
public:
    int numberOfSteps(int n) 
    {
        int c=0;
        while(n)
        {
            if(n%2==0)
            {
                n=n/2;
                c++;
            }
            else
            {
                n=n-1;
                c++;
            }
        }
        return c;
    }
};