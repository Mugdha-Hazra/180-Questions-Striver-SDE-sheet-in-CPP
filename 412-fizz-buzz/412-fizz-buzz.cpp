class Solution {
public:
    vector<string> fizzBuzz(int m)
    {
        vector<string>v;
     for(int n=1;n<=m;n++)
     { if(n%3==0&&n%5==0)
            v.push_back("FizzBuzz");
        else if(n%3==0)
           v.push_back("Fizz");
        else if(n%5==0)
             v.push_back("Buzz");
      else{
        string s=to_string(n);
       v.push_back(s);}}
        return v;
        
    }
};