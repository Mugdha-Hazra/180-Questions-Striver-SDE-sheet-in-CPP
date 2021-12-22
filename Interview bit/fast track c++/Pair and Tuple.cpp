/*
#include <iostream>
#include <vector>
#include<tuple>
using namespace std;
*/

pair<int, int> findMaxMin(vector<int> &a){
    // First value of pair will be Maximum of array A and second will be Minimum of array A
    int m=a[0],mi=a[0];
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>m)
        m=a[i];
        if(a[i]<mi)
        mi=a[i];
    }
    pair<int,int>p;
    p.first=m;
    p.second=mi;
    return p;
}

tuple<int, int, int> compute(vector<int> &a){
    // First value of tuple will be sum of array A
    // Second value of tuple will be sum of even values in array A 
    // Third value of tuple will be sum of odd values in array A
    int s=0,o=0,e=0;
   // tuple<int ,int,int>t;
    for(int i=0;i<a.size();i++)
    {
      s+=a[i];
      if(a[i]%2==0)
      e+=a[i];
      else
      o+=a[i];
    }
    tuple<int ,int,int>t=make_tuple(s,e,o);
    return t;
}

/*
int main()  {
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin>>A[i];
    }
    
    pair<int, int> max_min = findMaxMin(A);
    cout<<max_min.first<<" "<<max_min.second<<endl;
    
    tuple<int, int, int> tuple_values = compute(A);
    cout<< get<0>(tuple_values) << " " << get<1>(tuple_values) << " " << get<2>(tuple_values) << endl;
    
    return 0;
}
*/
