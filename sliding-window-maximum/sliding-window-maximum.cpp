class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& num, int k) {
        vector<int> ans;
        deque<int> dq;
        
        for(int i=0;i<num.size();i++)
        {
            if(!dq.empty() && dq.front() == (i-k))//to remove out of bound
            {
                dq.pop_front();
            }
            
            while(!dq.empty() && num[dq.back()] < num[i])
            {
                dq.pop_back();
            }
            
            dq.push_back(i);
            
            if(i >= k-1)
            {
                ans.push_back(num[dq.front()]);
            }
        }
        return ans;

    }
};