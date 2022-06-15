class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int sz = arr.size();
        vector<int> candidates = {arr[sz/4], arr[sz/2], arr[sz*3/4]};
        for (auto cand : candidates) {
            auto st = lower_bound(arr.begin(), arr.end(), cand);
            auto ed = upper_bound(arr.begin(), arr.end(), cand);
            if (4 * (distance(st, ed)) > sz)
                return cand;
        }
        return -1;
    }
};