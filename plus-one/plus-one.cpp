class Solution {
public:
    vector<int> plusOne(vector<int>& d) 
    {
        int n=d.size()-1;
        for(int i=n;i>=0;i--)
        {
            if(d[i]<9)
            {
                d[i]++;
                return d;
            }
            d[i]=0;
        }
        d[0]=1;
        d.push_back(0);
        return d;
     }
};

/*class Solution {
public:
    vector<int> plusOne(vector<int>& d) 
    { int c=0;
        for(int i=0;i<d.size();i++)
        {
            c=c*10+d[i];
        }
        c+=1;
       vector <int>v;
     while(c)
     {
         v.push_back(c%10);
         c=c/10;
     }
     reverse(v.begin(),v.end());
     return v;

     }
};*/