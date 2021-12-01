class Solution {
public:
    int strStr(string h, string n) 
    {
        if(h.size()<n.size())return -1;
        if(h==n||n=="")return 0;
        
        for(int i=0;i<h.size();i++)
        {
            if(h[i]==n[0])
            {    int k=0,f=0; 
                while(n[k]!='\0')
                {
                    if(h[i+k]==n[k])
                        k++;
                    else{
                        f=1;break;
                    }
                }
                if(f==0)
                    return i;
            
            }
            
        }return -1;
        }
};