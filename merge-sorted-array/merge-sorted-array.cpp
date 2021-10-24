class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        int i=0,j=0,k=0;
        int c[200];
        while(i<m && j<n)
        {
            if(a[i]<b[j])
            {
                c[k++]=a[i++];
            }
            else
            {
                c[k++]=b[j++];
            }
        }
        for(;i<m;i++)
        {
            c[k++]=a[i];
        }
        for(;j<n;j++)
        {
            c[k++]=b[j];
        }
        for(i=0;i<m+n;i++)
        {
            a[i]=c[i];
        }
    }
};