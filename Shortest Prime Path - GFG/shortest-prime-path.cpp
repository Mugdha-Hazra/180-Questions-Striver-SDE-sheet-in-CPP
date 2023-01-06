//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{   
  public:
    bool isPrime(int n){
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    
    int shortestPath(int Num1,int Num2)
    {   
        // Complete this function using prime vector
        unordered_set<int> primes;
        for(int i=1000;i<=9999;i++){
            if(isPrime(i)){
                primes.insert(i);
            }
        }
        queue<pair<string,int>> q;
        string num2=to_string(Num2);
        q.push({to_string(Num1),0});
        primes.erase(Num1);
        while(!q.empty()){
            auto temp=q.front();
            q.pop();
            if(temp.first==num2){
                return temp.second;
            }
            string s=temp.first;
            int cnt=temp.second;
            for(int pos=0;pos<4;pos++){
                for(int i=0;i<=9;i++){
                    if(s[pos]!=i+'0'){
                        string s1=s;
                        s1[pos]=i+'0';
                        if(primes.find(stoi(s1))!=primes.end()){
                            q.push({s1,cnt+1});
                            primes.erase(stoi(s1));
                        }
                    }
                }
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.
signed main()
{
    int t;
    cin>>t;
    Solution obj;
    while(t--)
    {
        int Num1,Num2;
        cin>>Num1>>Num2;
        int answer=obj.shortestPath(Num1,Num2);
        cout<<answer<<endl;
    }
}
// } Driver Code Ends