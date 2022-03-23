class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0,temp = 0;
        for(int i = 0;i < accounts.size();i++){
            temp = 0;
            for(int j = 0;j < accounts[i].size();j++){
                temp += accounts[i][j];
            }
            max = temp > max ? temp : max;
        }
        return max;
    }
};