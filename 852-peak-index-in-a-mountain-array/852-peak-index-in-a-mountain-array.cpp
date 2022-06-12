class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a)
    {
        if(a.size()==3)
            return 1;
        int l=0,h=a.size()-1;
        while(l<h)
        {   
            int m=(l+h)/2;
            
            //cout<<l<<h<<m<<"*";
            //cout<<a[m]<<a[m-1]<<a[m+1]<<"$$";
            if(a[m]>a[m-1]&&a[m]>a[m+1])
                return m;
            else if(a[m]<a[m+1])
                l=m+1;
            else 
                h=m;
        }
        return 1;
    }
};
// class Solution {
// public:
//     //golden-section search
//     int peakIndexInMountainArray(vector<int>& A) {
//         int left = 0, right = A.size() - 1;
//         int x1 = gold1(0, right), x2 = gold2(0, right);
//         while (x1 < x2){
//             if (A[x1] < A[x2]){
//                 left = x1;
//                 x1 = x2;
//                 x2 = gold1(x1, right);
//             }
//             else{
//                 right = x2;
//                 x2 = x1;
//                 x1 = gold2(left, x2);
//             }
//         }
//         return std::distance(A.begin(), std::max_element(A.begin() + left, A.begin() + right + 1));
//     }
// private:
//     int gold1(int left, int right){
//         return left + int((right - left) * 0.382);
//     }
//     int gold2(int left, int right){
//         return left + int((right - left) * 0.618);
//     }
// };