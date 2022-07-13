class Solution {
public:
    bool isHappy(int n) {
int sum=0;
for(int i=0;i<10;i++){
while(n>0){
int x=n%10;
n=n/10;
sum=sum+(x*x);
}
if(sum==1){
return true;
}
n=sum;
sum=0;
}
return false;
}
};