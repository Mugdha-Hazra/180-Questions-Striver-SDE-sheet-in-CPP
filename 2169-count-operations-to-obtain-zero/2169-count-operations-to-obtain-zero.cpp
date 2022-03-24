class Solution {
public:
    int countOperations(int a, int b) 
    {
        int c=0;
        while(a&&b)
        {
            if(a>b)
            {
                a=a-b;
                c++;
            }
            else
            {
                b-=a;
                c++;
            }
        }
        return c;
        
    }
};