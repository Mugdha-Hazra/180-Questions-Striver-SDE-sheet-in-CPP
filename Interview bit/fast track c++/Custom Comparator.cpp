bool comp(pair<int,int>a,pair<int,int>b)
{
    if((a.first+a.second)<(b.first+b.second))
    return true;
    return false;
}
void sortArray(vector<pair<int, int>> &v){
   sort(v.begin(),v.end(),comp); 
}
