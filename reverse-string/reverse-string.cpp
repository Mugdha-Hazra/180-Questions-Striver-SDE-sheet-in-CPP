// class Solution {
// public:
//     void reverseString(vector<char>& str)
//     {
//        if(str.size() == 0)
//     {
//         return;
//     }
//     reverse(str.substr(1));
//    // cout << str[0];
//      //   putchar(s);
        
        
//         // int i;
//         // int n=s.size();
//         // for(int i=0;i<s.size()/2;i++)
//         // {
//         //     swap(s[i],s[n-1-i]);
//         // }
            
// //             void printReverse(const char *str) {
// //   if (!*str)
// //     return;
// //   printReverse(str + 1);
// //   putchar(*str);
// // }
        
//     }
// };
class Solution {
public:
    void reverseString(vector<char>& s,int x=-2,int y=-1) {
          if(y-x<=0) return;
          if(x==-2) x=0;
          if(y==-1) y=s.size()-1;
       
        reverseString(s,x+1,y-1);
       
        int p=s[x];
        s[x]=s[y];
        s[y]=p;
    }
};