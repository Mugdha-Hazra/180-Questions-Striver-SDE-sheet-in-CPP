class Solution {
public:
    
    int C[20002];
    int MAX=20001;
    int MIN=10001;
    int sum(int x){
        int ret=0;
        while(x>0){
            ret+=C[x];
            x-=x&(-x);
        }
        return ret;
    }
    
    void add(int x,int d){
        while(x<=MAX){
            C[x]+=d;
            x+=x&(-x);
        }
    }
    
    vector<int> countSmaller(vector<int>& nums) {
        vector<int> ans;
        memset(C,0,sizeof(C));
        int n=nums.size();
        for(int i=n-1;i>=0;i--){
            nums[i]+=MIN;
            int small=sum(nums[i]-1);
            // ans.insert(ans.begin(), small);
            ans.push_back(small);
            add(nums[i],1);
        }
        for(int i=0;i<n/2;i++){
            swap(ans[i],ans[n-1-i]);
        }
        return ans;
    }
};