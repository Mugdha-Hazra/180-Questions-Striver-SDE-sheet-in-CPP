class Solution {
public:
    bool canConstruct(string r, string m) 
    {
        if(r[0]=='\0')
            return true;
        if(m[0]=='\0')
            return false;
        if(m.size()<r.size())
            return false;
        int a[26]={0};
        for(int i=0;i<m.size();i++)
        {
            a[m[i]-'a']++;
        }
        for(int i=0;i<r.size();i++)
        {
            a[r[i]-'a']--;
            if(a[r[i]-'a']<0)
                return false;
        }
        return true;
    }
};

// sort(r.begin(),r.end());
        // // sort(m.begin(),m.end());
        // // if(r==m)
        // //     return true;
        // int f=0;
        // for(int i=0;i<r.size();i++)
        // {
        //     if(r[i]==m[i])
        //         f=1;
        //     else
        //     {f=0;
        //     break;
        //     }
        // }
        // if(f==0)
        // return false;