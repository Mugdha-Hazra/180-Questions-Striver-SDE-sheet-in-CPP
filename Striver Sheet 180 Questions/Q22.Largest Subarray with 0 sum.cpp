int maxLen(int a[], int n)
{
    unordered_map<int,int>mmp;
    int maxi=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum==0)
        {
            maxi=i+1;
        }
        else{
            if(mmp.find(sum)!=mmp.end())
            {
                maxi=max(maxi,i-mmp[sum]);
            }
            else{
                mmp[sum]=i;
            }
        }
    }
    return maxi;
