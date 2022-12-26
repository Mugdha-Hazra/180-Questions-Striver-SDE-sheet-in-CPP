//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    void precompute()

    {

        // Code Here

        return;

        

    }

    

    long long solve(long long l, long long r){

        // Code Here

        long long int a[64];

        

        long long sum=0;

        long long count=0;

        

        for(int i=0;i<64;i++)

        {

            a[i]=pow(2,i);

        }

        for(int i=0;i<64;i++)

        {

            for(int j=i+1;j<64;j++)

            {

                for(int k=j+1;k<64;k++)

                {

                    sum=a[i]+a[j]+a[k];

                    if(sum>=l&&sum<=r)

                    {

                        count++;

                    }

                    if(sum>r)

                    {

                        //flag=1;

                        break;

                    }

                }

                

            }

            

        }

        return count;

    }


    
};



//{ Driver Code Starts.

int main()
{
    int t;
    Solution ob;
    ob.precompute();
    cin>>t;
    while(t--)
    {
        long long l,r;
        cin>>l>>r;
        cout << ob.solve(l, r) << endl; 
    }
    return 0;
}
// } Driver Code Ends