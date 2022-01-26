class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor, set<pair<int, int>> &set, int &tmp) {
        if(sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size() || image[sr][sc] != tmp || set.find({sr, sc}) != set.end())
            return image;
    
        set.insert({sr, sc});
        image[sr][sc] = newColor;
        floodFill(image, sr - 1, sc, newColor, set, tmp);
        floodFill(image, sr + 1, sc, newColor, set, tmp);
        floodFill(image, sr, sc - 1, newColor, set, tmp);
        floodFill(image, sr, sc + 1, newColor, set, tmp);
        return image;
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor)
    {
        set<pair<int, int>> set;
        int tmp = image[sr][sc];
        return floodFill(image, sr, sc, newColor, set, tmp);    
    }
};
