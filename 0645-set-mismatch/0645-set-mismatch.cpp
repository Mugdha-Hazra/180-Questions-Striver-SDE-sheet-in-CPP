class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int p = 0, acc1 = 0, acc2 = 0;
        // Get the xor of missing and duplicate numbers
        for (unsigned i = 0; i < nums.size(); ++i)
            p ^= (i + 1) ^ nums[i];

        p &= -p; // We'll use only the last significant set bit

        // Split the numbers in 2 categories and xor them
        for (unsigned i = 0; i < nums.size(); ++i)
        {
            ((nums[i] & p) == 0) ? acc1 ^= nums[i] : acc2 ^= nums[i];
            (((i + 1) & p) == 0) ? acc1 ^= i + 1 : acc2 ^= i + 1;
        }

        // Determine which is the duplicate number
        for (auto n : nums)
            if (n == acc1)
                return {acc1, acc2};
        return {acc2, acc1};
    }
};