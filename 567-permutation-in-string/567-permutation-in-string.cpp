class Solution {
public:
    
    int fun(string a,string b)
    {   int h[26]={0};
      for(int i=0;i<a.size();i++)
      {
          h[a[i]-'a']++;
      }
     for(int i=0;i<b.size();i++)
      {
          h[b[i]-'a']--;
         if(h[b[i]-'a']<0)
             return 0;
      }
     
        return 1;
    }
    bool checkInclusion(string s1, string s2) 
    { if(s1==s2)
            return true;
        if(s1.size()>s2.size())
            return false;
        string s;
        int n=s1.size(),m=s2.size();
        if(s1.size()==s2.size())
        {
              if(fun(s1,s2)==1)
            {  
                return true;
               
            }
            return false;
        }
        int t=0,f=0;
        for(int i=0;i<=m-n;i++)
        {     t=0;
            while(t<n)
             {
                s+=s2[i+t];
                 t++;
              }
            if(fun(s,s1)==1)
            {    f=1;
                return true;
            }
         s.clear();
        }
        if(f==0)
            return false;
        return true;
    }
};