//PERMUTATIONS
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> path;
        vector<bool> used(nums.size());
        
        dfs(nums, path, result, used);
        
        return result;
    }
        
        private:
        void dfs(vector<int>& nums, vector<int>& path, vector<vector<int>>& result, vector<bool>& used){
            if(path.size()==nums.size()){
                result.push_back(path);
                return;
            }
            
            for(int i=0;i<nums.size();i++){
                if(used[i]){
                    continue;
                }
                used[i]=true;
                path.push_back(nums[i]);
                dfs(nums,path,result,used);
                path.pop_back();
                used[i]=false;
            }        
    }
};

//PERMUTATIONS 2
class Solution {
 public:
  vector<vector<int>> permuteUnique(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> path;
    vector<bool> used(nums.size(), false);

    sort(begin(nums), end(nums));
    dfs(nums, used, path, ans);

    return ans;
  }

 private:
  void dfs(const vector<int>& nums, vector<bool>& used, vector<int>& path,
           vector<vector<int>>& ans) {
    if (path.size() == nums.size()) {
      ans.push_back(path);
      return;
    }

    for (int i = 0; i < nums.size(); ++i) {
      if (used[i])
        continue;
      if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1])
        continue;
      used[i] = true;
      path.push_back(nums[i]);
      dfs(nums, used, path, ans);
      path.pop_back();
      used[i] = false;
    }
  }
};

//COMBINATIONS
class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> path;
        
        dfs(n, k, 1, path, result);
            return result;
    }
    private:
    void dfs(int n,int k,int s, vector<int>& path, vector<vector<int>>& result){
        if(k==0){
            result.push_back(path);
        return;
        }
        for(int i=s;i<=n;i++){
            path.push_back(i);
            dfs(n,k-1,i+1,path,result);
            path.pop_back();
        }
    }
};

// COMBINATION SUM 
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> ans;
        
        sort(candidates.begin(),candidates.end());
        dfs(candidates,target,0,result,ans);
        
        return result;

    }        
        private:
        void dfs(vector<int>& candidates, int target, int start, vector<vector<int>>& result, vector<int>& ans ){
            if(target<0)
                return;
            
            if(target==0)
                result.push_back(ans);  
            
            for(int i=start;i<candidates.size();i++){
                ans.push_back(candidates[i]);
                dfs(candidates,target-candidates[i],i,result,ans);
                ans.pop_back();
            }
        }
};

//COMBINATION SUM 2

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> path;
        
        sort(candidates.begin(),candidates.end());
        backtrack(candidates, result, path, 0, target);
        
        return result;
    }
    
    private:
    void backtrack(vector<int>& candidates,vector<vector<int>>& result,vector<int>& path, int idx, int target )
    {
        if (target < 0)
            return;
        
        if(target==0)
            result.push_back(path);
    
    for(int index=idx;index<candidates.size();index++){
        if(index > idx && candidates[index]==candidates[index-1])
            continue; 
        path.push_back(candidates[index]);
        backtrack(candidates, result, path, index+1, target-candidates[index]);
        path.pop_back();
    }
  }
};

//SUBSETS 2
class Solution {
 public:
  vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> path;

    sort(begin(nums), end(nums));
    dfs(nums, 0, path, ans);

    return ans;
  }

 private:
  void dfs(const vector<int>& nums, int s, vector<int>& path,
           vector<vector<int>>& ans) {
    ans.push_back(path);

    for (int i = s; i < nums.size(); ++i) {
      if (i > s && nums[i] == nums[i - 1])
        continue;
      path.push_back(nums[i]);
      dfs(nums, i + 1, path, ans);
      path.pop_back();
    }
  }
};
