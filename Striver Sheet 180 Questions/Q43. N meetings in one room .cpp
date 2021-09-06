int maxMeetings(int start[], int end[], int n){
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.push_back({end[i],start[i]});
        }
        sort(v.begin(),v.end());
        int cur=0, count=0;
        for(int i=0;i<n;i++){
            if(cur < v[i].second){
                count++;
                cur = v[i].first;
            }
        }
        return count;
    }
