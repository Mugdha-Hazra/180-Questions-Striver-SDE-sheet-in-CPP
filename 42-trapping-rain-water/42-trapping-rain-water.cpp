class Solution {
public:
    int trap(vector<int>& arr)
    {
		int n =arr.size();
		if(n== 0)
			return 0;
		 int left[n]; 



	// Right [i] contains height of tallest bar to 
	// the right of ith bar including itself 
	int right[n]; 

	// Initialize result 
	int water = 0; 

	// Fill left array 
	left[0] = arr[0]; 
	for (int i = 1; i < n; i++) 
		left[i] = max(left[i - 1], arr[i]); 

	// Fill right array 
	right[n - 1] = arr[n - 1]; 
	for (int i = n - 2; i >= 0; i--) 
		right[i] = max(right[i + 1], arr[i]); 

	// Calculate the accumulated water element by element 
	// consider the amount of water on i'th bar, the 
	// amount of water accumulated on this particular 
	// bar will be equal to min(left[i], right[i]) - arr[i] . 
	for (int i = 0; i < n; i++) 
		water += min(left[i], right[i]) - arr[i]; 

	return water; 
	
    }
};