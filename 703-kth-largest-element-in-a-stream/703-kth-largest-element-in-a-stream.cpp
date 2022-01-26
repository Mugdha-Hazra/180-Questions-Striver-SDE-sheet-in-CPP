class KthLargest {
public:
    KthLargest(int k, vector<int>& nums):
        kVal(k)
    {
        for (int const& num : nums) {
            pq.push(num);
            if (pq.size() > kVal) {
                pq.pop();
            }
        }
    }
    
    int add(int val) {
        pq.push(val);
        if (pq.size() > kVal) {
            pq.pop();
        }
        
        return pq.top();
    }

private: 
    int kVal{0};
    std::priority_queue<int, vector<int>, std::greater<int>> pq;
    
};
/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */