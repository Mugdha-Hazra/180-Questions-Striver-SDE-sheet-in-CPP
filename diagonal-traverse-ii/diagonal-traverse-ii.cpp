class Solution {
public:
  vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
    vector<vector<int>> table;
    
    for(int i = 0; i != nums.size(); i++){
      if(i + nums[i].size() > table.size()) table.resize(i + nums[i].size());
      for(int j = i, k = 0; k != nums[i].size(); j++, k++) table[j].push_back(nums[i][k]);
    }
    
    vector<int>answer;
    for(auto &x: table)
      for(int i = x.size()-1; i >= 0; i--) answer.push_back(x[i]);
    
    return answer;
  }
};