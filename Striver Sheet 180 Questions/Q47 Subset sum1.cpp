 void summ(int i,int N,vector<int> &arr,int sum,vector<int> &v){
        if(i==N){
            v.push_back(sum);
            return;
        }
        
        
        summ(i+1,N,arr,sum,v);
        summ(i+1,N,arr,sum+arr[i],v);
        
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> v;
         summ(0,N,arr,0,v);
        sort(v.begin(),v.end());
        return v;
    }
