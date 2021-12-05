class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int last_index=-1;
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i]==1){
                last_index=i;
                continue;
            }
            if((i-1!=last_index || i==0) && (i==flowerbed.size()-1 || flowerbed[i+1]!=1 )){
                n--;
                last_index=i;
            }
        }
        if(n<=0)
            return true;
        return false;
    }
    /*bool canPlaceFlowers(vector<int>& a, int n)
    {
        if(a.size()==1 && a[0]==0)
            return true;
            
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==0)
            {
                if(i==0 && i+1 && a[i+1]==0)
                { n--; a[i]=1; }
                else if(i==a.size()-1 && i-1 && a[i-1]==0 )
                { n--; a[i]=1; }
                else if(a[i]==0&&a[i-1]==0&&a[i+1]==0)
                {  n--;a[i]=1;
                }
            }
        }
        if(n==0)
            return true;
        return false;
        
        
    }*/
};