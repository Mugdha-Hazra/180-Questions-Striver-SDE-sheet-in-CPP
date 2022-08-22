class Solution {
public:
    bool isPowerOfFour(int n) {
    
    if(n==0) return false;
    
    while (1){
        if(n==1 || n==4) return true;
        if(n%4!=0) return false;
        n=n/4;
    };
    return true;
}
};