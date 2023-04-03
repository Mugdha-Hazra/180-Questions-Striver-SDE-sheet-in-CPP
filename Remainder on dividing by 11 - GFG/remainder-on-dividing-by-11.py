#User function Template for python3


class Solution:
    def xmod11(self,x):
        return int(x)%11
        #code here


#{ 
 # Driver Code Starts
#Initial Template for Python 3


if __name__ == '__main__':
    tcs=int(input())
    for _ in range(tcs):
        x = input()
        
        ob = Solution()
        
        print(ob.xmod11(x))

# } Driver Code Ends