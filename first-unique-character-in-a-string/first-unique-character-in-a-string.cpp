class Solution {
public:
    int firstUniqChar(string s) 
    {
        int a[26]={0};
        for(int i=0;s[i]!='\0';i++)
        {
            int p=s[i]-'a';
            a[p]++;
        }
        for(int i=0;s[i]!='\0';i++)
        {  
             int p=s[i]-'a';
            if(a[p]==1)
            {   
                return i;
            }
        }
        return -1;
        
    }
};