class Solution {
public:
 void merge(vector<int>& n1, int m, vector<int>& n2, int n) {
        int i = m-1, j =n-1, t = n+m-1;
        while (j >=0){
        ((i>=0 && n1[i] > n2[j]) ? n1[t--] = n1[i--] : n1[t--] = n2[j--]);  
        }
    }
};    