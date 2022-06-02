// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       long long int l=1,h=n,m=1;
        if(isBadVersion(l)==true)
            return 1;
        while(l<=h)
        {
            m=(l+h)/2;
            if(isBadVersion(m)==true)
            {
                if(isBadVersion(m-1)==false)
                {
                    return m;
                }
                else
                {
                    h=m-1;
                }
            }
            else{
                l=m+1;
            }
        }
        return 0;
    }
};

//f f f t t 