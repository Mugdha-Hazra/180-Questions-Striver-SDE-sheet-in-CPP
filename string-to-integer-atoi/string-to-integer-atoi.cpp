class Solution {
public:
    int myAtoi(string s) {
		if(s == "") return 0;

		long int num = 0, n =s.length();
		int i = 0;
		bool pos = true;

		while(i<n && s[i]==' '){
			i++;
		}
			if(s[i]=='-'){
				pos = false;
				i++;
			}
		else if(s[i]=='+')
			i++;

		while(i<n && s[i]>='0' && s[i]<='9'){
			num = num*10 + (s[i] - '0');
			if(num<=INT_MIN || num>=INT_MAX) break; //num overflows or underflows
			i++;
		}
		if(pos==false){
			num = -1 * num;               //negative number
		}
		 if(num<=INT_MIN) return INT_MIN;
			else if(num >= INT_MAX) return INT_MAX;
		return num;
	}
};