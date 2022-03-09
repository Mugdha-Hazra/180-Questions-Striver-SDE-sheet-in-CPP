class Solution {
public:
    int minDistance(string word1, string word2) {
        int n = word1.length(), m = word2.length();
		
		//Declaring two vectors to store the previous and the current state
        vector<int>prev(m+1), curr(m+1);
        
		//In the case where one string is null, then it will require insertions of length(other string)
        for(int i = 1; i <= m; i++)
            prev[i] = i;
        
		
        for(int i = 1;i <= n; i++){
			//curr[0] = i sets the first element of ith row as i(same reason as above)
            curr[0] = i;
            for(int j = 1;j <= m; j++)
			
				/** If word1[i-1] == word2[j-1], i.e., if the current characters of both words match, 
				then no need of any change, so curr[j] = prev[j-1].*/
				/** Else, we can either delete, insert, or change the character of word1, which 
				requires 1 step more than the minnimum of all the three operations possible. */
				
                curr[j] = (word1[i-1] == word2[j-1])? prev[j-1] : min(curr[j-1], min(prev[j], prev[j-1])) + 1;     
				
			//Swapping the prev and curr states so that current state becomes the prev state
			//for next iteration.
            prev.swap(curr);
        }
        return prev[m];
    }
};