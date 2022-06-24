class Solution {
public:
    bool isPossible(vector<int>& target) {
    auto s = accumulate(begin(target), end(target), (long long)0);
    priority_queue<int> q(begin(target), end(target));
    while (s > 1 && q.top() > s / 2) {
        auto cur = q.top(); q.pop();
        s -= cur;
        if (s <= 1)
            return s;
        q.push(cur % s);
        s += cur % s;
    }
    return s == target.size();
}
};