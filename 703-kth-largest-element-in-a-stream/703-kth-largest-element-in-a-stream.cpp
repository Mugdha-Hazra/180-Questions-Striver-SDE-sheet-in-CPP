class KthLargest {
public:
    /*Solution: We'll solve using Min heap
- Crate min heap of k size
- Now keep adding other element 
- If current value is less than peek value, then we need not do anything
- If current value is greater than peek value, we poll top value & insert current value
- At every moment, peek element of min-Heap will be kth largest element
*/
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