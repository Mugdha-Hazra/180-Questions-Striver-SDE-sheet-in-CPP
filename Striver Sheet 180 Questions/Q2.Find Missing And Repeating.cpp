/*
Given an unsorted array Arr of size N of positive integers. One number 'A' from set {1, 2, …N}
is missing and one number 'B' occurs twice in array. Find these two numbers.

Example 1:

Input:
N = 2
Arr[] = {2, 2}
Output: 2 1
Explanation: Repeating number is 2 and 
smallest positive missing number is 1.
Example 2:

Input:
N = 3
Arr[] = {1, 3, 3}
Output: 3 2
Explanation: Repeating number is 3 and 
smallest positive missing number is 2.
Your Task:
You don't need to read input or print anything. Your task is to complete the function findTwoElement() 
which takes the array of integers arr and n as parameters and returns an array of integers of size 2 denoting the answer
( The first index contains B and second index contains A.)

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 105
1 ≤ Arr[i] ≤ N
*/

/*
approach
----------
We will use the hash table concept 
like we'll define an array on n elements and initilize it with 0 and 
then traverse the given list once we get an element we will increment the value in that index of the new array we'll increment the new array by 1.
then at the end we'll again traverse the new array if we get any a[i]=0 that means that is the missing element 
and any a[i]=2 that means  that is the repeated element.

time: O(n) space: O(n)
*/
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n)
    { 
        int a[n+1]={0},i,k,mis=0,rep=0;
        for(i=0;i<n;i++)
        {a[arr[i]]+=1;}
        
        for(i=1;i<=n;i++)
        {  if(a[i]==0)
            mis=i;
            if(a[i]==2)
            rep=i;
        }
        int *v= new int(2);
        v[0]=rep;
        v[1]=mis;
        return v;
    }
};

/* set<int> s;
        long long int sum=0,rep=0,g=0,mis=0;
        for(int i=0;i<n; i++)
        {   g+=arr[i];
            s.insert(arr[i]);}
        for(auto it=s.begin();it!=s.end();it++)
        {sum+=*(it);}
        rep=g-sum;
        mis=((n*(n+1))/2)-sum;
        int *a= new int(2);
        a[0]=rep;
        a[1]=mis;
        return a;*/

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends
