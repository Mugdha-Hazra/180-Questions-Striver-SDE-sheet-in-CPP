class Solution {
public:
    int f(string s,int i,int j)
    {
        int c=0;
        while(i>=0&&j<s.size()&&s[i--]==s[j++])
            c++;
        return c;
    }
    int countSubstrings(string s) {
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            c=c + f(s,i,i);//odd
            c=c + f(s,i,i+1);//even
        }
        return c;
    }
};

/*
I'm really sad 
i dont know waht to do i m feeling very low now
i want someone to motivate me 
and give me strength to deal with this
god please help me
i dont want to die
rather i wanted to crack some amazing offer
and help  my family
please god help me out in any possible form.
i can see people having no or little experience had also craked the internship.
but poor me!!
*/