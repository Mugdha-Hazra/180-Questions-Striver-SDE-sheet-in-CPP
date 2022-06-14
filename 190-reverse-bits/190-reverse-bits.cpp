class Solution {
public:
   uint32_t reverseBits(uint32_t n) {
        return reverse(n, 31);
    }
    
    
    uint32_t reverse(uint32_t n, int max){
        if(n==0){
            return 0;
        }
        
        return (n % 2) * pow(2,max) + reverse(n/2, --max);
    }

};