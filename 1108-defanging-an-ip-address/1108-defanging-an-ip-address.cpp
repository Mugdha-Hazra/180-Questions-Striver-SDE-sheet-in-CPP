class Solution {
public:
    string defangIPaddr(string address) {
        string str="[.]";
        for(int i=0;i<address.length();i++){
            if(address[i]=='.'){
                address.replace(i,1,str);
                i+=2;
            }
        }
        return address;
    }
};