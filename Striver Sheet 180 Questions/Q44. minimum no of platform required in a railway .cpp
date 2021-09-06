//N meetings in one room
int findPlatform(int a[], int d[], int n)
    {
        sort(a,a+n);
        sort(d,d+n);
        int p=1,r=1;
        int i=1,j=0;
        while(i<n&&j<n)
        {
            if(a[i]<=d[j])
            {
                p++;
                i++;
            }
            else if(a[i]>d[j])
            {
                p--;
                j++;
            }
            if(p>r)
            {
                r=p;
            }
        }
        return r;
        }
};
