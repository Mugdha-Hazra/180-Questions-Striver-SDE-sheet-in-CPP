class Solution {
public:
    bool rotateString(string A, string B) {
        if(A==B)return true; // if already same
      
      
      if(A.size()!=B.size())return false; //if size aren't equal
      
      
     A=A+A; //will have all the possible rotation now 
      
      int check=A.find(B); //will find the B substring
      
        if(check>A.size())return false; //if the position is greater then size
      
  return true;
    }
};