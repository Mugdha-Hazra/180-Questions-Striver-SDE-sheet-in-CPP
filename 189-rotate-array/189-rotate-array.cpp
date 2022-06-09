class Solution {
public:
    void rotate(vector<int>& n, int k) {
        k=k%n.size();
        reverse(n.begin(),n.end());
        reverse(n.begin(),n.begin()+k);
        reverse(n.begin()+k,n.end());
    //}\
        
    }
};

// 1 2 3 4 5 6 7
// 7 6 5 4 3 2 1

//  567 