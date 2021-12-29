class Solution {
public:
	//main function
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
		//create a map
        map<int,int> mp;
		
		//store the nums in map with their frequency
        for(auto num : nums)
            mp[num]++;
			
        int sum = 0;
		
		//iterate over the nums vector
        for(auto &num : nums){
			//find the pos in map
            auto itr = mp.find(num);
            sum = 0;
			//sum the frequency of all the elements less than the number
            for(auto it = mp.begin() ; it != itr ; it++)
                sum += it->second;
			//assingn the sum to the number
            num = sum;
        }
		//return result
        return nums;
    }
};