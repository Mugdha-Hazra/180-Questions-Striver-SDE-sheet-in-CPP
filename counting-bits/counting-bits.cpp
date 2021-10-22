class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> counter(num+1, 0); // solution vector with size (num+1), each element initialised to 0
        
        for(int i=1; i<=num; ++i){
            int n = i;
            while(n){
                counter[i]++; // increasing count of set bits till n is not zero
                n = n&(n-1); // clearing the first set bit from the right, each time
            }
        }
        
        return counter;
    }
};