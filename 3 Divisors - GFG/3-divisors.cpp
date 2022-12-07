//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    public:

    int m = 1000001;

    

    void seive(vector<long long>&isprime,vector<long long>&primes){

     

        isprime[0] = 0;

        isprime[1] = 0;

        

        for(int i = 2; i <= sqrt(m); i++){

            

            if(isprime[i]){

                for(int j = 2; j*i <= m; j++){

                    isprime[j*i] = 0;

                }

            }

        }

        int count = 0;

        for(int i = 2; i <= m; i++){

            

            if(isprime[i])

            count++;

            

            primes[i] = count;

        }

    }

    

    vector<int> threeDivisors(vector<long long> query, int q)

    {

        

        vector<long long>isprime(1000001,1);

        vector<long long>primes(1000001,0);

        

        seive(isprime,primes);

        

        vector<int>v;

        for(int i = 0; i < q; i++){

            int p = primes[int(sqrt(query[i]))];

            v.push_back(p);

        }

        

        return v;

    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while(t--){
        int q;cin>>q;
        vector<long long> query(q);
        for(int i=0;i<q;i++){
            cin>>query[i];
        }
        Solution ob;
            
        vector<int> ans = ob.threeDivisors(query,q);
        for(auto cnt : ans) {
            cout<< cnt << endl;
        }
    }
    return 0;
}
// } Driver Code Ends