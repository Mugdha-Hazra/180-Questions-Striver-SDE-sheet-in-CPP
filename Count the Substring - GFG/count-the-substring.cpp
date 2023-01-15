//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
public:
  long long inv=0;

  void merge(vector<int> &vec,int l,int mid,int h)

  {

      int n1=mid-l+1;

      int n2=h-mid;

      int arr[n1],arr1[n2];

      for(int i=0;i<n1;i++)

      {

          arr[i]=vec[l+i];

      }

      for(int i=0;i<n2;i++)

      {

          arr1[i]=vec[mid+1+i];

      }

      int i=0,j=0,k=l;

      while(i<n1 && j<n2)

      {

          if(arr[i]<=arr1[j])

          {

              vec[k]=arr[i];

              k++;

              i++;

          }

          else

          {

              vec[k]=arr1[j];

              k++;

              j++;

              inv+=n1-i;

          }

      }

      while(i<n1)

      {

          vec[k]=arr[i];

          k++;

          i++;

      }

      while(j<n2)

      {

          vec[k]=arr1[j];

          j++;

          k++;

      }

  }

  void mergesort(vector<int> &vec,int l,int h)

  {

      if(l>=h)

      {

          return;

      }

      int mid=(l+h)/2;

      mergesort(vec,l,mid);

      mergesort(vec,mid+1,h);

      merge(vec,l,mid,h);

  }

 

 

  long long countSubstring(string s){

    // code here

    int n=s.size();

    long long ans=0;

    vector<int> vec(n);

    for(int i=0;i<n;i++)

    {

        if(s[i]=='0')

        {

            vec[i]=-1;

        }

        else

        {

            vec[i]=1;

        }

        if(i > 0) vec[i] += vec[i - 1];

        if(vec[i] > 0) ans ++;

    }

 

    reverse(vec.begin(),vec.end());

    mergesort(vec,0,n-1);

    ans+=inv;

    return ans;

  }


};

//{ Driver Code Starts.
int main() {
 ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL); 
 int t=1;
 cin>>t;
 for(int i=1;i<=t;i++){
    string S;
    cin>>S;
    Solution obj;
    long long ans =obj.countSubstring(S);
    cout<<ans<<endl;
 }
}
// } Driver Code Ends